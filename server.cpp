#include <iostream> 

int main() {
    int n, t;

    std::cin >> n >> t;

    int time=0;
    int total= 0;
    for (int i=0;i<n;i++) {
        int temp;
        std::cin >> temp;
        time += temp;
        if (time > t) { break; }
        else { total++; }
    }
    std::cout << total;


    return 0;
}
