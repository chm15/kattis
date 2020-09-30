#include <iostream>


int main() {
    int i1,i2,i3;
    std::cin >> i1 >> i2 >> i3;
    if (i1+i2==i3) { std::cout<<i1<<'+'<<i2<<'='<<i3; }
    else if (i1-i2==i3) { std::cout<<i1<<'-'<<i1<<'='<<i3; }
    else if (i1/i2
