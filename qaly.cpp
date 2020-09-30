#include <iostream>


int main() {
    int n;
    float carry = 0;
    std::cin >> n;
    for (int i=0;i<n;i++) {
        float q, y;
        std::cin >> q >> y;
        carry+= q*y;
    }
    std::cout << carry;
    return 0;
}


