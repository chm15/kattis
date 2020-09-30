#include <iostream>
#include <vector>
#include <string>
#include <cmath>


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;
    std::string msgEnc;
    for (int i=0;i<n;i++) {
        std::cin >> msgEnc;
        int root = sqrt(msgEnc.size());
        std::vector< std::vector<char> > mes;
        for(int l=0;l<root;l++) {
            mes.push_back(std::vector<char> (root,'_'));
        }
        for (int i=0;i<msgEnc.size();i++) {
            mes[root-1-(i%root)][floor(i/root)] = msgEnc[i];
        }
        for (auto vec : mes) {
            for (auto mes : vec) {
                std::cout << mes;
            }
        }
        std::cout << '\n';
    }

    return 0;
}
