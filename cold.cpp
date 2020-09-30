#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int totalNegatives = 0;
    for (int i=0; i<n; i++) {
        int temp;
        std::cin >> temp;
        if (temp < 0) { totalNegatives++; }
    }

    std::cout << totalNegatives;
    return 0;
}


