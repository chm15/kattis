#include <map>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>


#define ARR_SIZE 100

void lexSort(std::string array[], int arraySize)
{
    std::string temp;
    for (int i=0; i<arraySize-1; i++)
    {
        for (int j=i+1; j<arraySize; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}
void lexSort(std::vector<std::string> &array, int arraySize)
{
    std::string temp;
    for (int i=0; i<arraySize-1; i++)
    {
        for (int j=i+1; j<arraySize; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void solve()
{
    int totalOrders;
    std::string lineIn;
    std::cin >> totalOrders;
    while (totalOrders!=0)
    {
        std::map<std::string, std::vector<std::string> > orders;
        for (int i=0; i<totalOrders; i++)
        {

            std::string word;
            std::string name;

            // Fixes blank line problem.
            std::string temp;
            std::cin >> temp;
            int currentWord = 0;
            if (temp != "\r" && temp != "\n")
            {
                name = temp;
                currentWord++;
            }

            std::getline(std::cin, lineIn);
            std::istringstream split(lineIn);

            while (getline(split, word, ' '))
            {
                if( word == "")
                {
                    continue;
                }
                if (currentWord==0)
                {
                    name = word;
                }
                else
                {
                    (orders[word]).push_back(name);
                }
                currentWord++;
            }
        }
        std::string sortedOrders[ARR_SIZE];
        int orderIterator = 0;
        for( auto & [key, val] : orders )
        {
            //std::cout << key;
            sortedOrders[orderIterator] = key;
            orderIterator++;
            lexSort(val, val.size());

        }

        for (int k=0; k<orderIterator; k++)
        {
            std::cout << sortedOrders[k];
            for (auto const& value: orders[sortedOrders[k]])
            {
                std::cout << " " << value;
            }
            std::cout << "\n"; 
        }

        lexSort(sortedOrders, orderIterator);

        std::cout << "\n";
        std::cin >> totalOrders;
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
