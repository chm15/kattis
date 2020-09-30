#include <iostream>
#include <sstream>
#include <string>
#include <map>


int main() {
    std::map<std::string,std::string> dict;
    int total = 0;
    std::string line;
    std::getline(std::cin, line);
    while(!line.empty()) {
        std::istringstream iss(line);
        std::string key, val;
        iss >> val >> key;
        dict.emplace(key,val);
        total++;
        std::getline(std::cin, line);
    }

    std::string line2;
    std::getline(std::cin, line2);
    std::string word;
    while (!line2.empty()) {
        std::istringstream iss2(line2);
        while(iss2>>word) {
            auto search = dict.find(word);
            if (search != dict.end()) {
                std::cout << (dict[(*search).first]) << '\n';
            } else {
                std::cout << "eh\n";
            }
        }
        std::getline(std::cin, line2);
    }
    return 0;
}
