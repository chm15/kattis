#include <iostream>
#include <vector>
#include <algorithm>


int getUnique(std::vector<int> vec) {
    std::sort(vec.begin(), vec.end());
    if(vec[0]==vec[1]) { return vec[2]; }
    else { return vec[0]; }
}

    

int main() {
    std::vector<int> x;
    std::vector<int> y;
    for (int i=0;i<3;i++) {
        int tx, ty;
        std::cin >> tx >> ty;
        x.push_back(tx);
        y.push_back(ty);
    }
    std::cout << getUnique(x) << ' ' << getUnique(y);

    return 0;
}
