#include <iostream>
#include <algorithm>
#include <string>


int main() {

    std::string table[26] = {"@","8","(","|)","3","#","6","[-]",
        "|","_|","|<","1","[]\\/[]","[]\\[]","0","|D","(,)","|Z",
            "$","']['","|_|","\\/","\\/\\/","}{","`/","2"};


    std::string line;
    std::getline(std::cin, line);

    for (char c : line) {
        char lower = std::tolower(c);
        if (lower>96 && lower<123) {
            std::cout << table[lower-97];
        } else {
            std::cout << c;
        }
    }
    return 0;
}
