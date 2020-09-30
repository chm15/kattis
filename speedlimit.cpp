#include <iostream>

int main() {
    int n;
    std::cin >> n;
    while( n != -1) {
        int previousT = 0;
        int distance = 0;
        for (int i=0;i<n;i++) {
            int v, t, dt;
            std::cin >> v >> t;
            dt = t-previousT;
            distance += v*dt;
            previousT = t;
        }
        std::cout << distance << " miles\n";
        std::cin >> n;
    }


    return 0;
}
