#include <iostream>
#include <cstdint>
#include <stdio.h>

inline void fastscan(uint_fast32_t &number) 
{ 
    //variable to indicate sign of input number 
    uint_fast32_t c; 
  
    number = 0; 
  
    // extract current character from buffer 
    c = getchar_unlocked(); 
  
    // Keep on extracting characters if they are integers 
    // i.e ASCII Value lies from '0'(48) to '9' (57) 
    for (; (c>47 && c<58); c=getchar()) 
        number = number *10 + c - 48; 
} 

inline void writeInt (uint_fast32_t n)
    {
        uint_fast32_t N = n, rev, count = 0;
        rev = N;
        if (N == 0) { putchar_unlocked('0'); putchar_unlocked('\n'); return ;}
        while ((rev % 10) == 0) { count++; rev /= 10;} //obtain the count of the number of 0s
        rev = 0;
        while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  //store reverse of N in rev
        while (rev != 0) { putchar_unlocked(rev % 10 + '0'); rev /= 10;}
        while (count--) putchar_unlocked('0');
    }


void solve(uint_fast32_t N, uint_fast32_t L)
{
    uint_fast32_t currentVal, previousVal = 0, carry=1;

    if (N==L)
    {
        //std::cout << 1 << "\n";
        writeInt(1);
        return;
    }

    for (uint_fast32_t i=0; i<L; i++)
    {
        //std::cin >> currentVal;
        fastscan(currentVal);

        if (currentVal <= previousVal)
        {
            //std::cout << 0 << "\n";
            writeInt(0);
            return;
        }
        for (int j=previousVal+1; j<currentVal; j++)
        {
            carry = ( carry * (N-j) ) % 1000000007;
        }
        previousVal = currentVal;
    }
    if (currentVal!=N)
    {
        //std::cout << 0 << "\n";
        writeInt(0);
        return;
    }
    else
    {
        //std::cout << carry << "\n";
        writeInt(carry);
        return;
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    uint_fast32_t N, L;
    fastscan(N);
    fastscan(L);
    //std::cin >> N >> L;

    solve(N, L);

    return 0;
}
