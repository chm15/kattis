#include <iostream>
#include <algorithm>
#include <string>


int main() {
    int a, b;
    std::string temp = "";
    for (int i=0;i<3;i++) {
        char t;
        std::cin >> t;
        temp.append(1,t);
    }
    std::reverse(temp.begin(),temp.end());
    a = std::stoi(temp);
    temp = "";

    for (int i=0;i<3;i++) {
        char t;
        std::cin >> t;
        temp.append(1,t);
    }

    std::reverse(temp.begin(),temp.end());
    b = std::stoi(temp);

    std::cout << (a>b ? a : b);
    return 0;
}
