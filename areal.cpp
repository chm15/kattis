#include <iostream> 
#include <cmath>
#include <iomanip>


int main() {
    double a;
    std::cin >> a;
    std::cout <<std::setprecision(8)<< 4*sqrt(a);
    return 0;
}
