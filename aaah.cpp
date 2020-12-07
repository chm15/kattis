#include <iostream>
#include <string>



int main() {
    std::string a1, a2;
    std::cin >> a1 >> a2;
    bool a1Bigger = a1.size() >= a2.size();
    std::cout << (a1Bigger ? "go" : "no");
    return 0;
}

