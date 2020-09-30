#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> words;
    bool dupe = false;
    std::string temp= "/";
    do {
        std::cin >> temp;
        if (temp != "") { 
            if (std::find(words.begin(), words.end(), temp) != words.end()) {
                dupe = true;
            } else {
                words.push_back(temp); 
            }
        }
    
    } while (std::cin.peek() != '\n');

    std::cout << (dupe ? "no" : "yes");

    return 0;
}

