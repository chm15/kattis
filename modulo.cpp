#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int nums[10];
    std::vector<int> a;
    for (int i=0;i<10;i++) {
        int temp;
        std::cin >> temp;
        nums[i] = temp%42;
    }
    for( int i=0;i<10;i++) {
        int m;
        m = nums[i]%42;
        if (std::find(a.begin(),a.end(),m) == a.end()) {
            a.push_back(m);
        }
    }
    std::cout << a.size();

    return 0; 
}
