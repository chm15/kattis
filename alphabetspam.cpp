#include <iostream>
#include <string>


int main() {
    std::string line;
    std::cin >> line;
    int white=0;
    int lower=0;
    int upper=0;
    int symbol=0;
    for (char c : line) {
        if (c==95) { white++; }
        else if (c>96 && c<123) { lower++; }
        else if (c>64 && c<91) { upper++; }
        else { symbol++; }
    }
    int total = white + lower + upper + symbol;
    std::cout << white / (double)total << '\n';
    std::cout << lower / (double)total << '\n';
    std::cout << upper / (double)total << '\n';
    std::cout << symbol / (double)total << '\n';

    return 0;
}
