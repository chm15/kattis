#include <iostream>
#include <cmath>
#include <iomanip>


int main() {
    long n;
    std::cin >> n;
    long base = 2;
    for (int i=0;i<n;i++) {
        base += base-1;
    }
    std::cout << std::fixed << std::setprecision(0) << pow(base,2);

    return 0;
}

