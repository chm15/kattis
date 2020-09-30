#include <iostream>
#include <algorithm>
#include <string>


int main() {
    int n;
    std::string tempStr;
    std::getline(std::cin, tempStr);
    n = std::stoi(tempStr);

    for (int i=0;i<n;i++) {
        int alphabet[26];
        for (int v=0;v<26;v++) { alphabet[v]=1; }
        std::string line;
        std::getline(std::cin, line);
        for (char c : line) {
            int index = -1;
            // UPPER
            if (c > 64 && c < 91) {
                index = c-65;
            } else if (c > 96 && c < 123) { // lower
                index = c-97;
            }
            if (index != -1) {
                alphabet[index]=0;
            }
        }
        if (std::none_of(alphabet, alphabet+26,
                    [](int i){return i;}
                    )) {
            std::cout << "pangram";
        } else {
            std::cout << "missing ";
            for (int j=0;j<26;j++) {
                int unused = alphabet[j];
                if (unused) {
                    std::cout << (char(j+97));
                }
            }
        }
        std::cout << '\n';
    }
    return 0;
}
