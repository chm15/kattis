#include <iostream>
#include <algorithm>
#include <string>


int main() {
    int t;
    std::cin >> t;
    for (int i=0;i<t;i++) {
        int n;
        std::cin >> n;
        std::string numbers[100001];
        int j;
        for (j=0;j<n;j++) {
            std::cin >> numbers[j];
        }
        bool incon = false;
        for (std::string num : numbers) {
            incon=std::any_of(numbers, numbers+j+1, [num](std::string str) {
                    if (str==num) { return false; }
                    else if (str.size()<=num.size()) { return false; }
                    else if (num==str.substr(0,num.size())) { return true; }
                    else { return false; }
                    } );
            if (incon) { break; }
        }
        if (incon) { std::cout << "NO" << '\n'; }
        else { std::cout << "YES" << '\n'; }
    }
    return 0;
}
            

