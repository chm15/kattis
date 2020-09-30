#include <iostream>


int main() {
    int l, r;
    std::cin >> l >> r;
    int comp = l-r;
    if (!l && !r) { std::cout << "Not a moose"; }
    else if (comp==0) { std::cout << "Even " << l*2; }
    else if (comp<0) { std::cout << "Odd " << r*2; }
    else if (comp>0) { std::cout << "Odd " << l*2; }
    return 0;
}
