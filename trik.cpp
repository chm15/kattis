#include <iostream>
#include <string>

int main() {
    std::string combo;
    std::cin >> combo;
    int pos[3] = {1,0,0};
    for (auto c : combo){
        if (c=='A') {
            int temp = pos[1];
            pos[1]=pos[0];
            pos[0]=temp;
        } else if (c=='B') {
            int temp = pos[2];
            pos[2]=pos[1];
            pos[1]=temp;
        } else {
            int temp = pos[2];
            pos[2]=pos[0];
            pos[0]=temp;
        }
    }
    int ans = pos[0] ? 1 : (pos[1] ? 2 : 3);
    std::cout << ans;

    return 0;
}
