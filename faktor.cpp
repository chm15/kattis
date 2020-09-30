#include <iostream> 
#include <cmath>


int main() {
    int a, i;
    std::cin >> a >> i;
    int temp = a*i;
    while (ceil(temp/((float)a))>=i) { --temp; }
    std::cout << ++temp;
    return 0;
}
