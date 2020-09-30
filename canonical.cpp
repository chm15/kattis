#include <iostream>
#include <cstdint>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    long prev, cur;
    std::cin >> n >> prev;

    bool ans = true;

    for (int i=1;i<n;i++) {
        std::cin >> cur;
        if (cur<2*prev) { 
            ans = false;
            break;
        }
        prev = cur;
    }
    std::cout << (ans ? "canonical" : "non-canonical");
    
    return 0;
}
