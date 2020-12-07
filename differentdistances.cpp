#include <iostream>
#include <cmath>

void solve(double x1, double y1, double x2, double y2, double p)
{
    double ans = pow(pow(fabs(x1-x2), p)+pow(fabs(y1-y2),p), 1/p);
    std::cout << ans << '\n';
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    double x1, x2, y1, y2, p;
    while (true)
    {
        std::cin >> x1;
        if (x1 == 0) { break; }
        std::cin >> y1 >> x2 >> y2 >> p;
        solve(x1, y1, x2, y2, p);
    }
    return 0;
}
