#include <iostream>
#include <algorithm>


int main() {

    int n;
    std::cin >> n;
    int i;
    int bus[1005];
    for (i=0;i<n;i++) {
        std::cin >> bus[i];
    }

    std::sort(bus, bus+i);
    int xPrev = bus[0];
    bool primed = false;
    int streak=0;
    std::cout << bus[0];
    for (int j=1;j<i;j++) {
        if (bus[j] == xPrev+1) {
            if (streak == 1) {
                std::cout << '-';
            }
            if (j==(i-1)) {
                if (!primed) {
                    std::cout << ' ';
                }
                std::cout << bus[j];
            }
            streak++;
            primed=true;
        } else if (primed) {
            if (streak==1) {
                std::cout << ' ';
            }
            std::cout << xPrev << ' ' << bus[j];
            streak = 0;
            primed=false;
        } else {
            std::cout << ' ' << bus[j];
        }
        xPrev = bus[j];
    }

    return 0;
}
