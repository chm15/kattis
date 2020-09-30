#include <iostream>


int main() {
    int x, y, n;
    std::cin >> x >> y >>n;
    for (int i=1;i<n+1;i++) {
        bool divx = i%x==0;
        bool divy = i%y==0;
        if (divx&&divy) { std::cout << "FizzBuzz\n"; }
        else if (divx) { std::cout << "Fizz\n"; }
        else if (divy) { std::cout << "Buzz\n"; }
        else { std::cout << i << '\n'; }
    }
}
