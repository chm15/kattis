#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>


int main() {
    std::vector<std::string> words;

    std::string line;
    while (std::getline(std::cin, line)) {
        std::stringstream s(line);
        std::string w;
        while (s >> w) {
            //process individual words
            if (std::find(words.begin(),words.end(),w) == words.end()) {
                // If word not in vector
                words.push_back(w);
            }
        }
    }
    // words vector compiled

    std::vector<std::string> uniqueOut;

    for (int i=0;i<words.size();i++) {
        for (int j=0;j<words.size(); j++) {
            if (j==i) { continue; }
            std::string concat = words[i]+words[j];
            auto search = std::find(uniqueOut.begin(),uniqueOut.end(),concat);
            if (search==uniqueOut.end()) {
                // Concat is unique
                uniqueOut.push_back(concat);
            }
        }
    }

    std::sort(uniqueOut.begin(),uniqueOut.end());
    for (std::string word : uniqueOut) {
        std::cout << word << '\n';
    }
    return 0;
}
    

