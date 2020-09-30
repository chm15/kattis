#include <iostream>
#include <cmath>


int main() {
    long long a, b;
    while(std::cin >> a >> b) {
        std::cout << llabs(a-b) << '\n';
    }
}
