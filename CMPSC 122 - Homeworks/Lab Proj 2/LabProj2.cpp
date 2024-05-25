/**
 * LabProj2.cpp:
 * The program should collect the price of a stock during 10 days and then display the maximum profit that can be made and what is the strategy for that.
 *
 * @author Lucas Hebmuller
 */


#include <iostream>
using namespace std;


void getPrices( double [], int );
double getMaxProfit( double [], int, double, double &, double &);


int main()
{
    const int SIZE = 10;
    double stock[SIZE], fund = 100, maxProfit, buy, sell;

    getPrices( stock, SIZE );
    maxProfit = getMaxProfit( stock, SIZE, fund, buy, sell);

    cout << "Max Profit: " << maxProfit << endl;
    if ( maxProfit != 0)
        cout << "Best Strategy: buy on day " << buy << ", sell on day " << sell << endl;


    return 0;
}


void getPrices( double stock[], int SIZE )
{
    cout << "Please type the 10-day price history of the stock:" << endl;
    for ( int i = 0; i < SIZE; i++ )
        cin >> stock[i];
    cout << endl;
}


double getMaxProfit( double stock[], int SIZE, double fund, double &buy, double &sell )
{
    double maxProfit, profit;
    maxProfit = profit = 0.0;

    for ( int b = 0; b < SIZE; b++ )
    {
        for ( int s = b + 2; s < SIZE; s++ )
        {
            if ( stock[s] > stock[b] )
            {
                double shares = fund / stock[b];
                profit = ( shares * stock[s] ) - fund;
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
        maxProfit = 0.0;


    return maxProfit;
}



/*
 * EXECUTION SAMPLE:
 * Please type the 10-day price history of the stock:
 * 100 88 93 95 99 90 92 87 74 65
 *
 * Max Profit: 12.5
 * Best Strategy: buy on day 2, sell on day 5
 *
 * Process finished with exit code 0
 */
