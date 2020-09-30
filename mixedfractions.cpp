#include <iostream>


int main() {
    int num, den;
    std::cin >> num >> den;
    while (num && den) {
        std::cout << num/den << ' ' << num%den 
            << " / " << den << '\n';

        std::cin >>  num >> den;
    }
    return 0;
}
