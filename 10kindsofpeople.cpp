#include <iostream>
#include <algorithm>

int mask[1000][1000] = {};
bool map[1000][1000];
int r,c;
int id=2;

struct coord {
    int x;
    int y;
};

void printMask() {
    std::cout << '\n';
    for (int k=0;k<r;k++) {
        for (int j=0;j<c;j++) {
            if (mask[k][j]>=0) { std::cout << ' '; }
            std::cout << mask[k][j];
        }
        std::cout << '\n';
    }
}

bool no(int x, int y, bool t) {
    // Returns 1 if good to go
    if (x>=r || y>=c || x<0 || y<0) {
        return 0;
    } else {
        bool out = ((map[x][y]==t) && mask[x][y]==0);
        return out;
    }
}

bool rec(int x, int y, coord end, bool t) {
    bool out = false;
    if (!no(x,y,t)) { return 0; }
    mask[x][y] = id*(t ? -1 : 1);

    if (end.x==x && end.y==y) {
        // Reached the destination
        out = true;
        //printMask();
    }
    out = out + rec(x+1,y,end,t);
    out = out + rec(x-1,y,end,t);
    out = out + rec(x,y+1,end,t);
    out = out + rec(x,y-1,end,t);

    return out;
}


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cin >> r >> c;
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            char c;
            std::cin >> c;
            map[i][j] = c-48;
        }
    }
    int n;
    std::cin >> n;
    for (int i=0;i<n;i++) {
        int r1,c1,r2,c2;
        std::cin>>r1>>c1>>r2>>c2;
        coord end;
        int x = r1-1;
        int y = c1-1;
        end.x = r2-1;
        end.y = c2-1;
        bool bin, dec;
        if (map[end.x][end.y]!=map[r1-1][c1-1]) {
            bin=false;
            dec=false;
        } else {
            if ((mask[x][y] == mask[end.x][end.y]) && mask[x][y]) {
                bin = mask[x][y]>0;
                dec = mask[x][y]<0;
            } else {
                bin = rec(r1-1, c1-1, end, 0);
                dec = rec(r1-1, c1-1, end, 1);
            }
        }
        if (bin) { std::cout << "binary\n"; }
        else if (dec) { std::cout << "decimal\n"; }
        else { std::cout << "neither\n"; }
        id++;
    }
    return 0;
}

