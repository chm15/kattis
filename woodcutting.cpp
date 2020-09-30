#include <iostream>
#include <iomanip>


int main() {
    int t;
    std::cin >> t;
    for (int i=0;i<t;i++) {
        int n;
        std::cin >> n;
        long avgTime[100005];
        for (int j=0;j<n;j++) {
            int w;
            std::cin >> w;
            long total = 0;
            for (int l=0;l<w;l++) {
                double x;
                std::cin >> x;
                total += x;
            }
            avgTime[j] = total/n; // Avg time a customer took.
        }
        double minimum = 999999999999999999;
        

        std::cout << std::fixed << std::setprecision(10) << avg << '\n';
    }
    return 0;
}
