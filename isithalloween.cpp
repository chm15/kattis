#include <iostream>
#include <string>


int main() {
    std::string line;
    std::getline(std::cin, line);
    bool itsTime = line=="OCT 31" || line=="DEC 25";
    std::cout << (itsTime ? "yup" : "nope");
    return 0;
}
