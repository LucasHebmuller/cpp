#include <iostream>
using namespace std;


double getCoins();
bool checkAnswer( double );


int main()
{
    double userSum;

    userSum = getCoins();

    if ( checkAnswer( userSum ) )
        cout << "Congrats! You got a dollar!" << endl;
    else
        cout << "Unfortunately you got the problem wrong... you got it wrong by: " << 1.00 - userSum << endl;


    return 0;
}


double getCoins()
{
    int pennies, nickels, dimes, quarters;

    cout << "Enter the number of pennies:" ;
    cin >> pennies;
    cout << "Enter the number of nickels:" ;
    cin >> nickels;
    cout << "Enter the number of dimes:" ;
    cin >> dimes;
    cout << "Enter the number of quarters:" ;
    cin >> quarters;


    return ( pennies * 0.01 ) + ( nickels * 0.05 ) + ( dimes * 0.1 ) + ( quarters * 0.25 );
}


bool checkAnswer( double s )
{
    if ( s != 1.00 )
        return false;
    else
        return true;
}