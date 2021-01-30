#include <iostream>
#include <cstdio>
#include <stdio.h>



inline void fastscan(unsigned int &number) 
{ 
    //variable to indicate sign of input number 
    unsigned int c; 
  
    number = 0; 
  
    // extract current character from buffer 
    c = getchar_unlocked(); 
  
    // Keep on extracting characters if they are integers 
    // i.e ASCII Value lies from '0'(48) to '9' (57) 
    for (; (c>47 && c<58); c=getchar()) 
        number = number *10 + c - 48; 
} 




struct LinkedMember {
    char c;
    LinkedMember* prev;
    LinkedMember* next;
};



LinkedMember input[1000000];



inline void solve() {
    //===== Set up home and end positions =====
    auto home = LinkedMember {'\0', 0, 0};
    home.prev = &home;
    auto end = LinkedMember {'\0', 0, 0};
    end.prev = &home;
    end.next = &end;
    
    home.next = &end;

    LinkedMember* cursorPrev = &home;
    LinkedMember* cursorNext = &end;
    unsigned int writeHead = 0;

    char c = getchar_unlocked();

    while (c != '\n') {

        switch(c) {
        case('['):  // home
            cursorPrev = &home;
            cursorNext = home.next;
            break;

        case(']'):  // end
            cursorPrev = end.prev;
            cursorNext = &end;
            break;

        case('<'):  // backspace
            // Move the cursor back one, unless cursor is at home.
            cursorPrev = cursorPrev->prev;
            cursorPrev->next = cursorNext;
            cursorNext->prev = cursorPrev;
            break;

        default:
            auto memberNew = LinkedMember {c, cursorPrev, cursorNext};
            input[writeHead] = memberNew;

            //===== Relink previous and next members =====
            cursorPrev->next = &input[writeHead];
            cursorNext->prev = &input[writeHead];

            cursorPrev = &input[writeHead];

            //===== Advance the write head =====
            writeHead++;

        }
        c = getchar_unlocked();
    }

    //===== Print array =====
    auto printHead = home.next;
    while (printHead != &end) {
        putchar(printHead->c);
        printHead = printHead->next;
    }
    putchar('\n');
}



int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    unsigned int t;
    fastscan(t);

    for (int i=0; i<t; i++) {
        solve();
    }

    //fflush(stdout);

    return 0;
}
