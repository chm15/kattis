#include <iostream>
#include <algorithm>
#include <vector>
#include <string>


int main() {
    int t;
    std::cin >> t;
    std::vector<std::string> places;
    for (int i=0;i<t;i++) {
        int n;
        std::cin >> n;
        for (int j=0;j<n;j++) {
            std::string tStr;
            std::cin >> tStr;
            if(std::find(places.begin(),places.end(), 
                        tStr)==places.end()) {
                places.push_back(tStr);
            }
        }
        std::cout << places.size() << '\n';
        places.clear();
    }
    return 0;
}
