#include <iostream>


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int p;
    std::cin >> p;
    for (int i=0;i<p;i++) {
        int k, n;
        std::cin >> k >> n;

        int s1, s2, s3;


        int t = ((n/2)*2);
        s1 = ((t/2)*(t+1))+ (n%2 ? n : 0) ;

        s2=(n*n);

        s3 = s2+n;

        std::cout<<k<<' '<<s1<<' '<<s2<<' '<<s3<<'\n';
    }
    return 0;
}

