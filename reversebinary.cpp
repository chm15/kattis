#include <iostream>


int main() {
    int n;
    std::cin >> n;
    int rev = 0;
    while (n > 0) {
        rev <<= 1;
        rev |= (n & 1);
        n >>=1;
    }
    std::cout << rev;
    return 0;
}
