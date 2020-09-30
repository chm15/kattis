#include <iostream>


int main() {
    int n, m;

    std::cin >> n >> m;
    int l = (n<m ? n : m);
    int h = (l!=n ? n : m);

    int lower = l+1;
    int higher = h+1;
    for (int i=lower; i<=higher;i++) {
        std::cout << i << '\n';
    }

    return 0;
}
