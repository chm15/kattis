#include <iostream>
#include <string>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    long long carry = 0;
    for (int i=0;i<n;i++) {
        std::string p;
        std::cin >> p;
        carry += pow(std::stoi(p.substr(0,p.size()-1)),std::stoi(p.substr(p.size()-1,1)));
    }
    std::cout << carry;
    return 0;
}
