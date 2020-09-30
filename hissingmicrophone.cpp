#include <iostream> 
#include <string>
#include <algorithm>


int main() {
    std::string str;
    std::cin >> str;
    std::string hiss = "ss";
    bool ss = std::search(str.begin(), str.end(), 
            hiss.begin(), hiss.end()) != str.end();

    std::cout << (ss ? "hiss" : "no hiss");
    return 0;
}
