#include <iostream>
#include <algorithm>


// FIX THIS WITH BINARY SEARCH FOR BETTER RUNTIME!

int main() {
    long long n, m;
    std::cin >> n >> m;

    // Take in shop's inventory
    long long shop[100005] = {0};
    for (long long i=0;i<n;i++) {
        std::cin >> shop[i];
    }
    std::sort(shop,shop+n);

    // Take in Joe's requests
    long long wasted = 0;
    for (long long i=0;i<m;i++) {
        long long req;
        std::cin >> req;
        long long waste = 999999999999;
        for (long long j=0;j<n;j++) {
            long long s = shop[j];
            long long dif = s-req;
            if (dif >=0) {
                if (dif < waste) {
                    waste = dif;
                } else { break; }
            }
        }
        wasted += waste;
    }
    std::cout << wasted;
    return 0;
}






