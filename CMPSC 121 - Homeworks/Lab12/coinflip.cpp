/**
 * coinflip.cpp:
 * This program should invite the user to play a game based in luck, and then display the results.
 *
 * @author Lucas Hebmuller
 */


#include <iostream>
#include <iomanip>
#include <ctime>
#include <random>
#include <cmath>
using namespace std;


bool coinFlip();


int main()
{
    srand( ( unsigned ) time( nullptr ) );
    const int SPACE = 25;
    int heads = 0, tails = 0;
    bool test;
    char answer;
    double winnings = 0.0, previousBalance = 0.0, game = 5.50, newBalance = 0.0;

    cout << fixed << setprecision(2);


    cout << "Welcome to the Coin Flip Game!" << endl;
    cout << endl;
    cout << "Here's a 100-Flip Example (T = Tails, H = Heads) :";


    for ( int i = 0; i < 100; i++ )
    {
        test = coinFlip();

        if ( test )
        {
            heads++;
        }
        else
        {
            tails++;
        }
    }
    cout << endl << "There were " << heads << " heads  and " << tails << " tails." << endl << endl;
    heads = 0;
    tails = 0;
    test = false;


    cout << "Each game costs $5.50. We'll flip a coin until the first Head appears, on the nth flip." << endl;
    cout << "Your winnings will be $2^(n-2)." << endl;
    cout << "Would you like to play a game?";
    cin >> answer;


    if ( answer != 'Y' && answer != 'y' && answer != 'N' && answer != 'n')
    {
        do
        {
            cout << "Please enter Y/y or N/n.    ";
            cout << "Try again:";
            cin >> answer;

        } while ( answer != 'Y' && answer != 'y' && answer != 'N' && answer != 'n' );
    }


    if ( answer == 'N' || answer == 'n' )
    {
        cout << "Thanks for playing! Congratulations on your winnings of $" << newBalance << endl;
    }
    else
    {
        cout << left << setw(SPACE) << "Game Results:";

        int counter = 0;
        do
        {
            test =  coinFlip();
            counter++;

        } while (!test);

        winnings = pow(2, (counter - 2)) ;
        newBalance = previousBalance + winnings - game;

        cout << endl << left << setw(SPACE) << "Prev. Balance:" << right << previousBalance << endl;
        cout << left << setw(SPACE) << "Game Cost:" << right << game << endl;
        cout << left << setw(SPACE) << "Winnings:" << right << winnings << endl;
        cout << left << setw(SPACE) << "New Balance:" << right << newBalance << endl << endl;

        previousBalance = newBalance;


        do
        {
            cout << "Would you like to play another game for $5.50?";
            cin >> answer;

            if ( answer != 'Y' && answer != 'y' && answer != 'N' && answer != 'n')
            {
                do
                {
                    cout << "Please enter Y/y or N/n.    ";
                    cout << "Try again:";
                    cin >> answer;

                } while ( answer != 'Y' && answer != 'y' && answer != 'N' && answer != 'n' );
            }

            if ( answer == 'N' || answer == 'n' )
            {
                cout << "Thanks for playing! Congratulations on your winnings of $" << newBalance << endl;
                break;
            }
            else
            {
                cout << left << setw(SPACE) << "Game Results:";

                counter = 0;
                do
                {
                    test =  coinFlip();
                    counter++;

                } while (!test);

                winnings = pow(2, (counter - 2)) ;
                newBalance = previousBalance + winnings - game;

                cout << endl << left << setw(SPACE) << "Prev. Balance:" << right << previousBalance << endl;
                cout << left << setw(SPACE) << "Game Cost:" << right << game << endl;
                cout << left << setw(SPACE) << "Winnings:" << right << winnings << endl;
                cout << left << setw(SPACE) << "New Balance:" << right << newBalance << endl << endl;

                previousBalance = newBalance;
            }


        } while ( true );

    }


    return 0;
}


bool coinFlip()
{
    int coin = rand() % 2 + 1;

    if ( coin == 1 )
    {
        cout << " H";

        return true;
    }
    else
    {
        cout << " T";

        return false;
    }
}


/*
 * EXECUTION SAMPLE:
 *
 * Welcome to the Coin Flip Game!
 *
 * Here's a 100-Flip Example (T = Tails, H = Heads) : T T H H T H H H T T T T H T H T T H H T H H H T H T H T T T T T H T T
 * T T T T H H T T T H T T T H H T H H H T H H H H H H T H H H T T T T T T H T H T H H T H T T T T T H T T H H H T H H T T
 * H T T H H
 * There were 46 heads  and 54 tails.
 *
 * Each game costs $5.50. We'll flip a coin until the first Head appears, on the nth flip.
 * Your winnings will be $2^(n-2).
 * Game Results:             H
 * Prev. Balance:           0.00
 * Game Cost:               5.50
 * Winnings:                0.50
 * New Balance:             -5.00
 *
 * Would you like to play another game for $5.50?G
 * Please enter Y/y or N/n.    Try again:y
 * Game Results:             T T H
 * Prev. Balance:           -5.00
 * Game Cost:               5.50
 * Winnings:                2.00
 * New Balance:             -8.50
 *
 * Would you like to play another game for $5.50?y
 * Game Results:             T H
 * Prev. Balance:           -8.50
 * Game Cost:               5.50
 * Winnings:                1.00
 * New Balance:             -13.00
 *
 * Would you like to play another game for $5.50?N
 * Thanks for playing! Congratulations on your winnings of $-13.00
 *
 * Process finished with exit code 0
 */
