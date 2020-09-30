#include <iostream>
#include <algorithm>
#include <string>


bool sort(std::string s1, std::string s2) {
    bool first = s1[0] < s2[0];
    bool second = s1[1] < s2[1];

    bool out = first;
    if (s1[0]==s2[0]) {
        out = second;
    }
    return out;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    while (n) {
        std::string names[200];
        int i;
        for (i=0;i<n;i++) {
            std::cin >> names[i];
        }
        std::stable_sort(names,names+i, sort);

        for (int j=0;j<i;j++) {
            std::cout << names[j] << '\n';
        }

        std::cout << '\n';
        std::cin >> n;
    }
    return 0;
}


