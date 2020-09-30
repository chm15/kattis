#include <iostream>


int main() {
    int n;
    std::cin >> n;
    for (int i=0;i<n;i++) {
        int temp;
        std::cin >> temp;
        std::cout << temp << " is " << (temp%2 ? "odd" : "even") << '\n';
    }
    return 0;
}
