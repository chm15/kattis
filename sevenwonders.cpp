#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

int main() {
    int T=0;
    int C=0;
    int G=0;
    std::string line;
    std::cin >> line;
    for (char c : line) {
        if (c=='T') { T++; }
        if (c=='C') { C++; }
        if (c=='G') { G++; }
    }
    int points = 0;
    points += T*T + C*C + G*G;
    points += std::min( {T,C,G} ) * 7;
    std::cout << points;
    return 0;
}
