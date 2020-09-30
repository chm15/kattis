#include <iostream>


int main() {
    int p;
    std::cin >> p;
    for (int i=0;i<p;i++) {
        int k, d;
        std::cin >> k >> d;
        
        int carry = 0;
        for (int i=0;i<d;i++) { carry+= i+2; }
        std::cout << k << ' ' << carry << '\n';
    }
    return 0;
}
