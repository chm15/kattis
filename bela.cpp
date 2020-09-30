#include <iostream>
#include <map> 


int main() {

    std::map<char, int> valuesDom = {
        {'A', 11},
        {'K', 4},
        {'Q', 3},
        {'J', 20},
        {'T', 10},
        {'9', 14},
        {'8', 0},
        {'7', 0}
    };

    std::map<char, int> valuesNon (valuesDom.begin(), valuesDom.end());
    valuesNon['J'] = 2;
    valuesNon['9'] = 0;


    int n;
    char dom;
    int points = 0;
    std::cin >> n >> dom;
    for (int i=0;i<n*4;i++) {
        char card, suit;
        std::cin >> card >> suit;
        if (dom==suit) {
            points += valuesDom[card];
        } else {
            points += valuesNon[card];
        }
    }
    std::cout << points;

    return 0;
}
