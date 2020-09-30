#include <iostream>


int main() {
    int h, m;
    std::cin >> h >> m;
    int outH = h;
    int outM = m-45;

    if (outM < 0) { 
        outM += 60;
        outH--;
    }
    if (outH < 0) { outH += 24; }

    std::cout << outH << ' ' << outM;
    return 0;
}

