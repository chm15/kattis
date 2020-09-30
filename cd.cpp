#include <iostream>
#include <algorithm>
#include <vector>


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n, m;
    std::cin >> n >> m;

    while (n!=0 && m!=0) {
        std::vector<int> cds;

        int temp;
        std::cin >> temp;
        cds.push_back(temp);

        for (int i=1;i<n;i++) {
            std::cin >> temp;
            if(cds[cds.size()-1]!=temp){
                cds.push_back(temp);
            }
        }

        int output = 0;
        int ind = 0;
        for (int i=0;i<m && i<n;i++) {
            int temp;
            std::cin >> temp;
            for ( ind;
                    temp >= cds[ind] && ind < cds.size(); 
                    ind++) {

                if(temp == cds[ind]) {
                    output++;
                }
            }
        }
        std::cout << output << '\n';
        std::cin >> n >> m;
    }
    return 0;
}
