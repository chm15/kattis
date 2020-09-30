#include <iostream>
#include <algorithm>


int main() {
    int n;
    std::cin >> n;
    int pos[105];
    for (int i=0;i<n-1;i++) {
        int t;
        std::cin >> t;
        pos[i] = t;
    }
    std::cout << "1 ";
    for (int i=0;i<n-1;i++) {
        auto it = std::find(pos,pos+n-1,i);
        std::cout << ((it-pos)+2) << ' ';
    }
    return 0;
}

