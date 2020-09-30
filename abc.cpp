#include <iostream>
#include <map>
#include <algorithm>


int main() {
    int num[3];
    std::cin >> num[0] >> num[1] >> num[2];
    std::sort(num, num+3);
    std::map<char,int> vals;

    vals['A'] = num[0];
    vals['B'] = num[1];
    vals['C'] = num[2];
    for (int i=0;i<3;i++) {
        char letter;
        std::cin >> letter;
        std::cout << vals[letter] << ' ';
    }

    return 0;
}
