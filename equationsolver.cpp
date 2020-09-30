#include <iostream>
#include <vector>
#include <cmath>


void printArr(std::vector< std::vector<double> > a) {
    std::cout << "\n\n";
    for (auto row : a) {
        for (auto val : row) {
            std::cout << val << ' ';
        }
        std::cout << '\n';
    }
    std::cout << "\n\n";
}

std::vector<double> gauss( std::vector< std::vector<double> > &a) {
    int n = a.size();
    for (int k=0;k<n;k++) {
        int i_max = k;
        for (int i=k;i<n;i++) {
            double val = a[i][k];
            if (abs(val) > abs(a[i_max][k])) { i_max = i; }
        }

        if (a[i_max][k] == 0.0) {
            // No pivot in this column.
            continue;
        } else {
            // Swap rows before every pivot.
            for (int i=0;i<n+1;i++) {
                double temp = a[k][i]; 
                a[k][i] = a[i_max][i];
                a[i_max][i] = temp;
            }
            for (int i=k+1;i<n;i++) {
                double val = a[i][k] / a[k][k];
                a[i][k] = 0; // Fill rest of column with zeros.
                // For remaining row elements:
                for (int j=k+1;j<n+1;j++) {
                    a[i][j] -= a[k][j] * val;
                }
            }
        }
    }



    std::vector<double> x;
    for ( auto row : a) {
        x.push_back(row[n]);
    }

    for (int i=n-1;i>=0;i--) {
        for (int j=n-1;j>i;j--) {
            x[i] -= a[i][j] * x[j];
        }
        x[i] /= a[i][i];
    }

    return x;
}


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    while( n!=0 ) {
        // Init augmented matrix.
        std::vector< std::vector<double> > a;
        for (int i=0;i<n;i++) { 
            a.push_back(std::vector<double>(n+1,0.0)); // n+1 for augmented
            for (int j=0;j<n;j++) {
                std::cin >> a[i][j];
            }
        }
        for (int i=0;i<n;i++) { std::cin >> a[i][n]; }

        // gauss eliminate
        auto x = gauss(a);
        bool mult = false;
        bool incon = false;
        for (auto val : x) {
            if (std::isinf(val)) { incon = true; break; }
            else if (std::isnan(val)) { mult = true; }
        }
        if (incon) { std::cout << "inconsistent"; }
        else if (mult) { std::cout << "multiple"; }
        else {
            for (auto val : x) {
                std::cout << val << ' ';
            }
        }
        std::cout << '\n';

        std::cin >> n;
    }
    return 0;
}

