#include <iostream>
#include <vector> 

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    for (int i=0; i<t; i++) {
        int n;
        int xmin = 0;
        std::cin >> n >> xmin;
        int xmax = xmin;
        for (int j=1;j<n;j++) {
            int temp;
            std::cin >> temp;
            if (temp < xmin) { xmin = temp; }
            else if (temp > xmax) { xmax = temp; }
        }
        std::cout << (xmax-xmin)*2 << '\n';
    }
        

    return 0;
}

