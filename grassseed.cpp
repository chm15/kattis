#include <iostream>
#include <iomanip>


int main() {
    double c;
    int l;
    double ans = 0.0;
    std::cin >> c >> l;
    for (int i=0;i<l;i++) {
        double j, k;
        std::cin >> j >> k;
        ans += j*k*c;
    }
    std::cout << std::fixed << std::setprecision(8) << ans;
    return 0;
}

