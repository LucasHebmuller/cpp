/**
 * currency.cpp:
 * This program asks for the user how much money they wants to convert and to which country they are going, so the program outputs how much money his dollars are worth on the other currency.
 *
 * @author Lucas Hebmuller
 */


#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    double dollar;
    char country;
    cout << fixed << setprecision(2);


    cout << "How much money do you want to convert?";
    cin >> dollar;

    cout << "Are you going to Canada ( C ) or Mexico ( M )?";
    cin >> country;


    if ( !( country == 'C' || country == 'M'))
    {
        cerr << "That is an invalid country option";
    }
    else if ( country == 'C')
    {
        double canadianDollars;

        canadianDollars = ( dollar * 1.31);

        cout << "Your " << dollar << " US dollars are worth " << canadianDollars << " Canadian Dollars";
    }
    else
    {
        double pesos;

        pesos = (dollar * 19.97);

        cout << "Your " << dollar << " US dollars are worth " << pesos << " Mexican Pesos";
    }


    return 0;
}

/*
 * SAMPLE EXECUTION:
 * How much money do you want to convert?2.00
 * Are you going to Canada ( C ) or Mexico ( M )?C
 * Your 2.00 US dollars are worth 2.62 Canadian Dollars
 */


