#include <iostream>
#include <cmath>



int main() {
    int n;
    std::cin >> n;
    int x = floor(log2(n));
    int total = ceil(((float)n)/pow(2,x)) + x;
    std::cout << total;
    
    return 0;
}
