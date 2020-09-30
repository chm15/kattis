#include <iostream> 


int main() {
    int n;
    std::cin >> n;
    double ans;
    int total = 0;
    for (int i=0;i<n;i++) {
        int temp;
        std::cin >> temp;
        if (temp != -1) {
            total++;
            ans += temp;
        }
    }
    std::cout << ans/total;
    return 0;
}

