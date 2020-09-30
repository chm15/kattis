#include <iostream>


int main() {
    int nonfat = 0, fat = 0;
    while (true) {
        char peek = std::cin.peek();
        if (peek == '-') {
            peek = std::cin.peek();
            if (peek == '-') {
                // END
                break;
            }
            // Next case
            // Clear memory and output
        }
        for (int i=0;i<5;i++) {
            int quant;
            char type;
            int conversion;
            std::cin >> quant >> type;
            switch (i) {
            case 0 {
                // FAT
                if (type == '%') {
                    conversion = 2000;
                } else if (type == 'g') {
                    conversion = 1;
                } else if (type == '%') {
                    conversion = 60; // grams
                }
            }


            case 1: case 2: case 3: {
                // OTHERS
                if (type == '%') {
                    conversion = 2000;
                } else if (type == 'g') {
                    conversion = 1;
                } else if (type == '%') {
                    conversion = 60; // grams
                }
            }


            case 4:
                // ALCOHOL

            
        

