#include <iostream>
#include <cmath>


int main() {
    int n, w, h;
    std::cin >> n >> w >> h;
    float l = pow(w*w+h*h, 0.5);
    for (int i=0;i<n;i++) {
        float x;
        std::cin >> x;
        std::cout << (l >= x ? "DA" : "NE") << '\n';
    }
    return 0;
}
