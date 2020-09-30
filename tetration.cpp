#include <iostream>
#include <cmath>
#include <iomanip>


int main() {
    long double a;
    std::cin >> a;
    std::cout << std::fixed << std::setprecision(6) << powl(a, 1/a);
    return 0;
}
