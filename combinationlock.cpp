#include <iostream>
#include <algorithm>

int toDeg(int dial) { return (360*dial)/40; }
int degFrom(int currentPos, int oPos, bool clockwise) {
    int marks = 0;
    if (currentPos == oPos) { marks = 0; }
    else if (!clockwise) {
        int temp = 0;
        temp += currentPos;
        temp += 40 - oPos;
        marks = 40 - (temp%40);
        //if (currentPos > oPos) { marks = 360-currentPos-oPos; }
        //else { marks = oPos - currentPos; }
    } else {
        int temp = 0;
        temp += 40 - currentPos;
        temp += oPos;
        marks = 40 - (temp%40);
    }
    return toDeg(marks);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int endCombo[4] = {0,0,0,0};
    int combo[4] = {1,1,1,1};
    std::cin >> combo[0] >> combo[1]
        >> combo[2] >> combo[3];
    while (!std::equal(std::begin(combo),std::end(combo),std::begin(endCombo))){
        int degrees = 0;

        degrees += 720 + degFrom(combo[0], combo[1], 1);
        degrees += 360 + degFrom(combo[1], combo[2],0);
        degrees += degFrom(combo[2], combo[3],1);
        std::cout << degrees << '\n';
        std::cin >> combo[0] >> combo[1]
            >> combo[2] >> combo[3];
    }

    return 0;
}
