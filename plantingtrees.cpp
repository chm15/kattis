#include <iostream>
#include <algorithm>


int main() {
    int n;
    std::cin >> n;
    int trees[100001];
    int i;
    for (i=0;i<n;i++) {
        std::cin >> trees[i];
    }
    std::sort(trees, trees+i+1);
    int days = 0;
    int largest = 0;
    for (int j=0;j<i+1;j++) {
        int tree = trees[j];
        if (tree-days > largest) { largest = tree-days; };
        days++;
    }
    std::cout << (largest+i+2);
    return 0;
}

