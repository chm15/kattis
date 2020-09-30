#include <iostream>
#include <string>
#include <map>
#include <cctype>
#include <sstream>


std::map<std::string,double> lookup;

enum class Kind : char {
    name, number, assign, end,
    div='/',mul='*',plus='+',sub='-',lth='<',gth='>',eql='=',unkn='?',
    lb='[',rb=']',lp='(',rp=')',lbrc='{',rbrc='}'
};

struct Token {
    Kind kind;
    std::string stringValue;
    double numberValue;
};

class TokenStream {
public:
    TokenStream(std::istream& s) : ip{&s} { }
    Token get() {
        char ch;
        do {
            if (!ip->get(ch)) return ct={Kind::end}; // istream failed
        } while (ch != '\n' && isspace(ch)); // skip whitespace
        switch (ch) {
        case '\n':
            ct.kind = Kind::end;
            return ct;
        case '/':
        case '*':
        case '+':
        case '-':
        case '<':
        case '>':
        case '=':
        case '?':
        case '[':
        case ']':
        case '(':
        case ')':
        case '{':
        case '}':
            return ct={static_cast<Kind>(ch)};
        case '0': case '1': case '2': case '3': case '4': case '5':
        case '6': case '7': case '8': case '9': case '.':
            ip->putback(ch);
            *ip >> ct.numberValue;
            ct.kind = Kind::number;
            return ct;
        default:
            if (isalpha(ch)) {
                ct.stringValue = ch;
                while (ip->get(ch)) {
                    if (isalnum(ch))
                        ct.stringValue += ch;
                    else {
                        ip->putback(ch);
                        break;
                    }
                }
            }
            if (lookup.count(ct.stringValue)) {
                ct.kind = Kind::number;
                ct.numberValue = lookup[ct.stringValue];
            } else {
                ct.kind = Kind::name;
            }
            return ct;
        }
    }

    const Token& current() { return ct; }
private:
    std::istream* ip;
    Token ct {Kind::end} ;
};



TokenStream ts {std::cin};



double prim(bool);
void evalBlock(bool get);
void exec(bool get);

double exp(bool get) {
    double left = prim(get);
    while(true) {//while(ts.current().kind == Kind::number) {
        switch (ts.current().kind) {
        case Kind::plus:
            left += exp(true);
        default:
            return left;
        }
    }
}

double assign(bool get) {
    if (get) ts.get();
    std::string ident = ts.current().stringValue;
    ts.get();  // Skip past equals sign
    if (ts.get().kind == Kind::unkn) {
        lookup[ident] = -69;
        ts.get();
    } else {
        lookup[ident] = exp(false);
    }
    if (ts.current().kind != Kind::rb) std::cout << "']' expected";
    return 0;
}

bool assertion(bool get) {
    double left = prim(get);
    //ts.get(); // Skip past '='
    double right = prim(true);
    return left==right;
}

bool conditional(bool get) {
    double left = exp(get);
    switch (ts.current().kind) {
    case Kind::lth:
        if (left==-69) {
            return (0 < exp(true));
        } else {
            return (left < exp(true));
        }
    case Kind::gth:
        if (left==-69) {
            return (0 > exp(true));
        } else {
            return (left > exp(true));
        }
    }
    std::cout << "Conditional error";
}

void skipbrace(bool get) {
    if (get) ts.get();
    while(ts.current().kind != Kind::rbrc) {
        if (ts.current().kind == Kind::lbrc) skipbrace(true);
        ts.get();
    }
    return;
}

void exec(bool get) {
    if (get) ts.get();
    switch(ts.current().kind) {
    case Kind::lb: // [
        assign(true);
        return;
    case Kind::lp: { // (
        bool cond = conditional(true);
        if (cond) {
            // Evaluate conditional block
            //ts.get(); // Skip past '{'
            evalBlock(true); //exec(true); // {[assign](cond{block})}
            return;
        } else {
            // Skip past code block
            skipbrace(true);
            if (ts.get().kind != Kind::rp) std::cout << "')' missing\n" ;
            return;
        }
                   }
    case Kind::lth: {
        bool assert = assertion(true);
        std::cout << (assert ? "ASSERTIONS ALWAYS HOLD" :
                "ASSERTIONS INVALID") << '\n';
        return;
    }
    }
}

double prim(bool get) {
    if (get) ts.get();

    switch(ts.current().kind) {
    case Kind::number:
    {    double v = ts.current().numberValue;
        ts.get();
        return v;
    }
    case Kind::name:
    {   if (lookup.count(ts.current().stringValue)) {
            ts.get();
            return lookup[ts.current().stringValue];
        } else {
            ts.get();
            return lookup[ts.current().stringValue] = 0;
        }
    }
    default:
        std::cout << "Error: Primary expected\n";
    }
}

void evalBlock(bool get) {
    if (get) ts.get();
    do {
        exec(false);
        ts.get();
    } while (ts.current().kind != Kind::rbrc
            && ts.current().kind != Kind::end);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::string line = "";
    std::getline(std::cin, line);
    n = std::stoi(line);

    for(int i=0;i<n;i++) {
        std::getline(std::cin, line);
        std::istringstream iss (line);
        ts = TokenStream(iss);

        evalBlock(true);
    }


    return 0;
}
