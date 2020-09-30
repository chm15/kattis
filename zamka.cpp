#include <iostream>
#include <string>

int getSum(int x) {
    std::string str = std::to_string(x);
    int carry = 0;
    for (char c : str) {
        int v = c-48;
        carry += v;
    }
    return carry;
}


int main() {
    int l, d, x;
    std::cin >> l >> d >> x;
    int min = 999999, max = 0;
    for (int i=l;i<=d;i++) {
        int sum = getSum(i);
        if (sum == x) {
            if (i<min) { min = i; }
            if (i>max) { max = i; }
        }
    }
    std::cout << min << '\n' << max;
    return 0;
}

    
