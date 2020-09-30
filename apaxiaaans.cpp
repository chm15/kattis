#include <iostream>
#include <string>

int main() {
    std::string namestr;
    std::cin >> namestr;
    char lastLetter = '\0';
    for (char t : namestr) {
        if (t != lastLetter) {
            std::cout << t;
            lastLetter = t;
        }
    }
    return 0;
}

