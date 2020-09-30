#include <iostream> 
#include <string>


int main() {
    int n;
    std::cin >> n;
    std::string prevName;
    std::cin >> prevName;

    int inc = -69;
    for (int i=1;i<n;i++) {
        std::string name;
        std::cin >> name;
        if (name>prevName) {
            // Z->A
            if (inc==-69) {
                inc = 1;
            } else if (inc == -1) {
                inc=0;
            }

        }
        else if (name<prevName) {
            // A->Z
            if (inc==-69) {
                inc = -1;
            } else if (inc == 1) {
                inc=0;
            }
        }
        prevName = name;
    }
    if (inc==-69) { inc = 0; }
    std::string out = "NEITHER";
    if (inc==1) { out = "INCREASING"; }
    else if (inc==-1) { out = "DECREASING"; }
    std::cout << out;
    return 0;
}
