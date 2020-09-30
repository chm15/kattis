#include <iostream>
#include <string>


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    for (int i=0;i<n;i++) {
        std::string l1, l2;
        std::cin >> l1 >> l2;
        
        std::cout << l1 << '\n' << l2 << '\n';
        for (int j=0;j<l1.size();j++) {
            char c1 = l1[j];
            char c2 = l2[j];
            std::cout << (c1==c2 ? '.' : '*');
        }
        std::cout << "\n\n";
    }
    return 0;
}
