#include <iostream>
#include <algorithm>
#include <vector>
#include <string>


int main() {
    int p,n;
    std::cin >> p >> n;

    std::vector<std::string> parts;
    bool allReplaced = false;
    int day;
    for (day=0;day<n;day++) {
        std::string prt;
        std::cin >> prt;
        auto search = std::find(parts.begin(),parts.end(),prt);

        if (search==parts.end()) {
            // unique part
            parts.push_back(prt);
        }
        if (parts.size()==p) {
            allReplaced=true;
            break;
        }
    }
    std::string out = (allReplaced ? std::to_string(day+1) 
            : "paradox avoided");
    
    std::cout << out;
    return 0;
}
