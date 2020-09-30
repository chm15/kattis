#include <iostream>

int main() {
    int a,b,c;
    std::cin >> a >> b >> c;
    std::cout << ((c-b)>(b-a) ? (c-b-1) : (b-a-1));

    return 0;
}
