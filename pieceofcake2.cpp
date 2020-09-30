#include <iostream>

int main() {
    int size, h, v;
    int height = 4;
    std::cin >> size >> h >> v;

    int len1 = size-h > h ? size-h : h;
    int len2 = size-v > v ? size-v : v;

    std::cout << len1*len2*height;

    return 0;
}
