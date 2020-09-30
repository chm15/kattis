#include <iostream>
#include <tuple>


int main() {
    int x, y;
    int quad = 0;
    std::cin >> x >> y;
    int xb = x>0 ? 1 : 0;
    int yb = y>0 ? 1 : 0;

    if (xb && yb ) { quad = 1; }
    else if (!xb && yb ) { quad = 2; }
    else if (!xb && !yb ) { quad = 3; }
    else if (xb && !yb ) { quad = 4; }
    std::cout << quad;
            

    return 0;
}
