#include <iostream> 
#include <algorithm>
#include <vector>


int main() {    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    for (int i=0;i<n;i++) {
        int g;
        std::cin >> g;
        std::vector<long> people;
        for (int j=0;j<g;j++) {
            long t;
            std::cin >> t;
            bool contains = false;
            auto itPerson = std::find(people.begin(),
                    people.end(), t);
            if (itPerson != people.end()) {
                people.erase(itPerson);
            } else {
                people.push_back(t);
            }
        }
        std::cout <<"Case #" << i+1 << ": " 
            << *(people.begin())<< '\n';
    }
    return 0;
}


