#include <iostream>
#include <vector>
#include <string>


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    int total = 1;
    while (n) {
        std::vector<std::string> strings(n);
        for (int i=0;i<n;i++) {
            std::cin >> strings[i];
        }
        std::vector<std::string> sorted;

        auto iter = sorted.begin();
        int indicator;
        if ((n%2)==0) {
            iter = sorted.end();
            indicator = 1;
        } else {
            iter = sorted.begin();
            indicator = -1;
        }
        for (int j=strings.size()-1;j>=0;j-- ) {
            auto str = strings[j];
            sorted.insert(iter,str);
            if (indicator==-1) {
                indicator = 1;
                iter = sorted.end();
            } else {
                indicator = -1;
                iter = sorted.begin();
            }
        }
        std::cout << "SET " << total++ << '\n';
        for (auto str : sorted) { std::cout << str << '\n'; }

        std::cin >> n;
    }
    return 0;
}
