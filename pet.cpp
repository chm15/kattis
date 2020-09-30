#include <iostream>


int main() {
    int winningCont;
    int winningPoints = -1;
    for (int i=0;i<5;i++) {
        int points = 0;
        for (int j=0;j<4;j++) {
            int temp;
            std::cin >> temp;
            points += temp;
        }
        if (points > winningPoints) { 
            winningPoints = points; 
            winningCont = i+1;
        }
    }
    std::cout << winningCont << ' ' << winningPoints;
    return 0;
}
                
