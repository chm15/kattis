#include <iostream>
#include <string>


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::string temp;
    std::getline(std::cin, temp);
    n = std::stoi(temp);
    for (int i=0;i<n;i++) {
        std::string line;
        std::getline(std::cin, line);
        if (line.substr(0,10) == "Simon says") {
            std::cout << line.substr(10,line.end()-line.begin());
            std::cout << '\n';
        }
    }
    return 0;
}
