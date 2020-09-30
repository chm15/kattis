#include <iostream>
#include <cmath>

int main() {
    int h, v;
    std::cin >> h >> v;
    std::cout << ceil((h/sin(M_PI*v/180)));
    return 0;
}
