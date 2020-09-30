#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>

struct coord {
    int x;
    int y;
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n = -1;
    int totalRuns = 0;
    while (n!= 0) {
        std::cin >> n;
        if (n != 0) {
            if (totalRuns) { std::cout << '\n'; }
            double carry = 0;
            coord firstCoord;
            std::cin >> firstCoord.x >> firstCoord.y;
            coord previousCoord = firstCoord;
            coord temp;
            for (int i=1;i<n;i++) {
                std::cin >> temp.x >> temp.y;
                carry += (temp.x-previousCoord.x)*(temp.y+previousCoord.y);
                previousCoord.x = temp.x;
                previousCoord.y = temp.y;
            }
            temp.x = firstCoord.x;
            temp.y = firstCoord.y;
            carry += (temp.x-previousCoord.x)*(temp.y+previousCoord.y);
            
            std::cout << (carry>0 ? "CW" : "CCW") << " " 
                << std::fixed << std::setprecision(1) << abs(carry)/2.0;
        }
        totalRuns++;
    }

    return 0;
}

