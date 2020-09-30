#include <iostream>
#include <string>


int main() {

    std::string cipher;
    std::cin >> cipher;

    int days = cipher.size();

    for (int i=0;i<cipher.size();i+=3) {
        char p = cipher[i];
        char e = cipher[i+1];
        char r = cipher[i+2];
        if (p=='p'||p=='P') { days--; }
        if (e=='e'||e=='E') { days--; }
        if (r=='r'||r=='R') { days--; }
    }
    std::cout << days;
    return 0;
}
