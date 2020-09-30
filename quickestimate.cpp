#include <iostream>
#include <string>


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    for (int i=0;i<n;i++) {
        std::string cost;
        std::cin >>cost;
        int count = 0;
        for (char c : cost) {
            count++;
        }
        std::cout << count << '\n';
    }
    return 0;
}
