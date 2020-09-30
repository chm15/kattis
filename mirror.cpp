#include <iostream>


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    for (int i=0;i<t;i++) {
        char image[21][21];
        int r, c;
        std::cin >> r >> c;
        for (int j=0;j<r;j++) {
            for (int k=0;k<c;k++) {
                std::cin >> image[j][k];
            }
        }
        std::cout << "Test " << i+1 << '\n';
        for (int j=r-1;j>=0;j--) {
            for (int k=c-1;k>=0;k--) {
                std::cout << image[j][k];
            }
            std::cout << '\n';
        }
    }
    return 0;
}


