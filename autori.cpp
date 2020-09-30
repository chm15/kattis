#include <iostream>
#include <string>


int main() {
    std::string tStr;
    std::cin >> tStr;
    for (char t : tStr) {
        if(t>64 && t<91) { std::cout << t; }
    }
    return 0;
}
