#include <iostream>


int main() {
    int correct[6] = {1,1,2,2,2,8};
    for (int i=0;i<6;i++) {
        int temp;
        std::cin >> temp;
        std::cout << correct[i]-temp <<' ';
    }
    
    return 0;
}
