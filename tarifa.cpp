#include <iostream>


int main() {
    int x, n;
    std::cin >> x >> n;
    int used = 0;
    for (int i=0;i<n;i++) {
        int p;
        std::cin >> p;
        used += p;
    }
    std::cout << x*(n+1) - used;
    return 0;
}

