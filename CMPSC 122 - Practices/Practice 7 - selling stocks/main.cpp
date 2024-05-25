#include <iostream>
using namespace std;


int * getPrices(int);
void getMaxProfit(const int *, int);


int main()
{
    const int SIZE = 10;
    int * prices = getPrices(SIZE);

    getMaxProfit(prices, SIZE);

    delete [] prices;


    return 0;
}


int * getPrices(int size)
{
    int * A = new int[size];

    cout << "Please type the 10-day price history of the stock:" << endl;
    for ( int i = 0; i < size; i++ )
    {
        cin >> A[i];
        cout << " ";
    }
    cout << endl;

    return A;
}


void getMaxProfit(const int * p, int SIZE)
{
    double profit, maxProfit = 0, fund = 100;
    int buy, sell;

    for (int b = 0; b < SIZE; b++ )
    {
        for(  int s = b + 2; s < SIZE; s++ )
        {
            if ( p[s] > p[b] )
            {
                profit = ( fund / p[b] ) * p[s] - fund; // calculo
                if ( profit > maxProfit )
                {
                    maxProfit = profit;
                    buy = b + 1;
                    sell = s + 1;
                }
            }
        }
    }
    if ( maxProfit < 0 )
        maxProfit = 0;

    cout << "Max Profit: " << maxProfit << endl;
    if ( maxProfit > 0)
        cout << "Best Strategy: buy on day " << buy << ", sell on day " << sell << endl;
}