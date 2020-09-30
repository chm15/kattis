#include <iostream>
#include <iomanip>
#include <cmath>


long double lookup[10005] = {1,0};
int maxInd = 0;

long double fact(int x) {
    if(x>maxInd) {
        do {
            maxInd++;
            lookup[maxInd] = lookup[maxInd-1] / double(maxInd);
        } while(maxInd<x);
    }
    return lookup[x];
}
    
long double e(int x) {
    long double sum = 0;
    for (int i=0;i<=x;i++) {
        sum += fact(i);
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << std::fixed << std::setprecision(40) << e(n);
    return 0;
}

