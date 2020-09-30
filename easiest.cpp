#include <iostream>


int sum(int x) {
    int carry = 0;
    while (x>0) {
        carry += x%10;
        x/=10;
    }
    return carry;
}

int main() {
    int n;
    std::cin >> n;
    while(n) {
        int s = sum(n);
        int m=0;
        int temp = 11;
        while(m==0) {
            if (sum(n*temp)==s) {
                m=temp;
            } else {
                temp++;
            }
        }
        std::cout << m << '\n';
        std::cin >> n;
    }
    return 0;
}
