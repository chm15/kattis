#include <iostream>
#include <cstring>
#include <algorithm>


#define WORDLEN 100

bool arrEqual(char arr1[], char arr2[], int len)
{
    for(int i=0; i<len; i++)
    {
        if (arr1[i]!=arr2[i])
        {
            return 0;
        }
    }
    return 1;
}

void solve()
{
    int n, k, w, totalChars;
    char buffer1[WORDLEN];
    char buffer2[WORDLEN];

    std::cin >> n;
    for (int i=0; i<n; i++) // For each case (n).
    {
        std::cin >> k >> w >> buffer1;
        for ( int word=1; word<w; word++) // For each word (w) in a case.
        {
            std::cin >> buffer2;
            for (int j=0; j<k; j++) // k is the strlen of any word.
            {
                if (arrEqual(buffer1 + j, buffer2, k-j))
                {
                    break;
                }
                totalChars++;
            }
            std::copy(buffer2, buffer2 + k, buffer1);
        }
        totalChars += strlen(buffer2);
        std::cout << totalChars << '\n';
        totalChars = 0;
    }
    return;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();

    return 0;
}

