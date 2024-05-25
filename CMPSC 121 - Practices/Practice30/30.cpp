#include <iostream>

using namespace std;


int main()
{
    const int SIZE = 5;
    int scores[SIZE] = {30, 40, 50, 60, 20};
    double total = 0, average;

    for ( int val : scores )
    {
        total += val;
    }

    average = ( total / SIZE );

    cout << "The average was: " << average;


    return 0;
}