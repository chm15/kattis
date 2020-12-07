#include <iostream>
#include <algorithm>
#include <iterator>

#define MAX_ARR 200000

void setNewOrder(long array[MAX_ARR], long val, long size, long startIndex)
{
    for( long i=startIndex; i<size; i++)
    {
        if (array[i] == val)
        {
            for (long j = i; j!=startIndex; j--)
            {
                array[j] = array[j-1];
            }
            array[startIndex] = 0;
            break;
        }
    }
}

void solve(long N, long K)
{
    long input[MAX_ARR];
    long tempInt;
    long totalInputs = 1;
    std::cin >> input[0];
    for (long i=1; i<N; i++)
    {
        // Take input, but only if it's not a duplicate of a neighbor
        std::cin >> tempInt;
        if (tempInt != input[i-1])
        {
            input[totalInputs] = tempInt;
            totalInputs++;
        }
    }


    long rightmostSet[MAX_ARR];
    long totalInts = 0;
    long orderOfInts[MAX_ARR];

    for (int i=totalInputs-1; i>=0; i--)
    {
        tempInt = input[i];
        if (rightmostSet[tempInt-1] == 0)
        {
            orderOfInts[K-totalInts-1] = tempInt; 
            rightmostSet[tempInt-1] = i;
            totalInts++;
        }
        if (totalInts == K)
        {
            break;
        }
    }

    long answer[MAX_ARR];
    long leftBarrier = 0;
    long rightBarrier;


    for( int i=0; i<K; i++)
    {
        answer[i] = orderOfInts[i];
    }

    for( int j=0; j<K; j++)
    {
        rightBarrier = rightmostSet[orderOfInts[j]-1];
        for(int i=leftBarrier; i<rightBarrier; i++)
        {
            if (input[i] < answer[j] && std::find(orderOfInts, orderOfInts+j, input[i]) == orderOfInts+j)
            {
                answer[j] = input[i];
                setNewOrder(orderOfInts, answer[j], K, j); // Should set orderOfInts[j] = 0 after shifting everything right by one.
                orderOfInts[j] = answer[j];
                rightmostSet[orderOfInts[j]-1] = i;

            }
        }
        if( answer[j]==input[rightBarrier])
        {
            for(int i=leftBarrier; i<=rightBarrier; i++)
            {
                if (input[i] == input[rightBarrier])
                {
                    rightmostSet[orderOfInts[j]-1] = i;   // SHIFT THE INDEX AS LEFT AS POSSIBLE. This sets the ints index to a new left if found.
                    break;
                }
            }
        }
        leftBarrier = rightmostSet[orderOfInts[j]-1] + 1;
    }


    for (int i=0; i<K;i++)
    {
        std::cout << orderOfInts[i] << " ";
    }
    return;

}

int main()
{
    long N, K;

    std::cin >> N >> K;

    solve(N, K);

    return 0;
}
