#include <iostream>
#include <string>


long oneCount(long x) {
    long carry = 0;
    while(x>0) {
        if (x&1) {
            carry++;
        }
        x >>= 1;
    }
    return carry;
}


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    long n;
    std::cin >> n;
    for (long i=0;i<n;i++) {
        std::string temp;
        std::cin >> temp;
        long longest = 0;
        for (int j=1;j<=temp.size();j++) {
            std::string substr = temp.substr(0,j);
            long x = std::stol(substr);
            long ones = oneCount(x);
            if (ones>longest) { longest = ones; }
        }
        std::cout << longest << '\n';
    }
    return 0;
}

