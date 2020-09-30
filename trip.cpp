#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>


int fixedRound(double x, bool up) {
    if (up) { return ceil(fabs(upper)*100)/100; }
    else { return floor(fabs(x)*100)/100; }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    while (n != 0) {
        std::vector< double > a(n);
        for (int i=0;i<n;i++) { std::cin >> a[i]; }
        double average = 0.0;
        for (double x : a) { average += x; }
        average /= n;

        for (



        /*
        double tM = 0.0;
        for (double x : a) {
            tM += floor(fabs(x-average)*100)/100;
        }
        tM /= 2.0;

        double upper = 0;
        for (double x : a) { 
            if (x>average) { upper += (x-average); }
        }
        double roundDown = floor(fabs(upper)*100)/100;
        double roundUp = ceil(fabs(upper)*100)/100;
        double ans = (roundDown - average) > (roundUp - average) ? roundUp : roundDown;
        */


        std::cout << '$' << std::fixed << std::setprecision(2) << ans <<'\n';

        std::cin >> n;
    }
    return 0;
}
