#include <iostream>
#include <string>


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    for (int i=0;i<t;i++) {
        int in;
        std::cin >> in;
        int v = in;
        for (int j=1;j<in;j++) {
            v *= j;
        }
        v %= 10;
        std::cout << v << '\n';
    }
    return 0;
}


