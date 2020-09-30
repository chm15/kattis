#include <iostream>

bool ctob(char c) { return (c=='0' ? 1 : 0); }

int main() {
    int n;
    std::cin >> n;
    int sumTB=0, sumLR=0;
    for (int i=0;i<n;i++) {
        char ts,bs,ls,rs;
        std::cin >> ts >> bs >> ls >> rs;
        bool t=ctob(ts), b=ctob(bs), l=ctob(ls), r=ctob(rs);
        sumTB += t + b;
        sumLR += l + r;
    }
    int min = (std::min(sumTB, sumLR)/2)*2;
    std::cout<< min/2 << ' ' << sumTB - min << ' ' << sumLR - min;
    return 0;
}

