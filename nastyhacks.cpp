#include <iostream> 


int main() {
    int n;
    std::cin >> n;
    for (int i=0;i<n;i++) {
        int r, e, c;
        std::cin >>r >>e >>c;
        int profit = e-c;
        if (profit>r) { std::cout << "advertise"; }
        else if (profit<r) { std::cout << "do not advertise"; }
        else { std::cout << "does not matter"; }
        std::cout << '\n';
    }
    return 0;
}
