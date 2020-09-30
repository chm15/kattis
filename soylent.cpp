#include <iostream>


int main() {
    int n;
    std::cin >> n;
    for (int i=0;i<n;i++) {
        int x;
        std::cin >> x;
        std::cout << (x/400) + (x%400 ? 1 : 0) << '\n';
    }
    return 0;
}
