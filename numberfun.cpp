#include <iostream> 


int main() {
    int n;
    std::cin >> n;
    for (int i=0;i<n;i++) {
        int a,b,c;
        std::cin >> a >> b >> c;
        int mult = (a*b)==c;
        int add = (a+b)==c;
        int div = ((a/double(b))==double(c)) ||((b/double(a))==double(c));
        int sub = ((a-b)==c) || ((b-a)==c);
        if(mult||add||div||sub) {
            std::cout << "Possible\n";
        } else {
            std::cout << "Impossible\n";
        }
    }
    return 0;
}

