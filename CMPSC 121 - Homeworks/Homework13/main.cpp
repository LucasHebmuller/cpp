#include <iostream>
#include "Dice.h"
using namespace std;


int main()
{
    const int SIZE = 3;
    int number;
    Dice dice[SIZE];


    cout << "The dice initial face up numbers are:" << endl;
    cout << "The theoretical probability of 3 dice tosses with the same number = 0.02777" << endl;
    cout << "The experimental probability of 3 dice tosses having the same number = 0.027596" << endl << endl;


    do
    {
        cout << "Please enter a number (3 - 18) for the sum of 3 dice tosses" << endl;
        cout << "Enter 0 to stop the experiment:";
        cin >> number;

        if ( number != 0 )
        {
            if ( number < 3 || number > 18 )
            {
                cout << "Invalid outcome value! Try again." << endl;
            }
        }
        else
        {
            for ( int i = 0; i < SIZE; i++)
            {
                number = dice[i].getSideUp();
                toss();
            }
            cout << endl;
        }
    } while( number != 0 );


    return 0;
}
