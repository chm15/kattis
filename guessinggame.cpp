#include <iostream>
#include <vector>
#include <string>

struct response {
    int val;
    int ans;
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int tVal = 5;
    while( tVal !=0 ) {
        std::string tAns = "";
        std::vector<response> r;
        while (tAns !="right on") {
            std::cin >> tVal;
            if (tVal==0) { break; }
            std::cin.ignore();
            std::getline(std::cin, tAns);

            response temp;
            temp.val = tVal;
            if (tAns == "right on") { temp.ans=0; }
            else if (tAns == "too high") { temp.ans=1; }
            else { temp.ans=-1; }
            r.push_back(temp);

        }
        if (tVal != 0) {
            int correct = (r.back()).val;
            std::string out = "Stan may be honest";
            for (int i=0;i<r.size()-1;i++) {
                response v = r[i];
                if ((v.val>correct && v.ans == -1)
                        || (v.val < correct && v.ans==1)
                        || (v.val == correct)
                   ) {
                    out = "Stan is dishonest";
                    break;
                }
            }
            std::cout << out << std::endl;
        }
    }

    return 0;
}
