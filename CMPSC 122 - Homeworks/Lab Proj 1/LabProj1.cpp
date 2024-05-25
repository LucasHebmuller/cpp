/**
 * LabProj1.cpp:
 * The program should run a guessing number game which the user or the computer can play it.
 *
 * @author Lucas Hebmuller
 */


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void player();
void computer();


int main()
{
    srand( ( unsigned )  time (nullptr) );

    char choice;

    do
    {
        cout << "Would you like to (p)play or watch the (c)computer play?" << endl;
        cin >> choice;

        if ( choice != 'p' && choice != 'c' )
            cout << "Invalid option. Please try again." << endl;

    } while( choice != 'p' && choice != 'c');

    if ( choice == 'p' )
    {
        player();
        cout << endl;
    }

    else if ( choice == 'c' )
    {
        computer();
        cout << endl;
    }


    do
    {
        do
        {
            cout << "Would you like to (p)play or watch the (c)computer play or (q)quit?" << endl;
            cin >> choice;

            if (choice != 'p' && choice != 'c' && choice != 'q')
                cout << "Invalid option. Please try again." << endl;

        } while (choice != 'p' && choice != 'c' && choice != 'q');

        if (choice == 'p')
        {
            player();
        }

        else if ( choice == 'c')
        {
            computer();
        }

        cout << endl;

    } while ( choice != 'q');


    return 0;
}


void player()
{
    int random = 100 + ( rand() % ( 200 - 100 + 1 )), user;

    do
    {
        do
        {
            cout << "Enter your guess between 100 and 200:" << endl;
            cin >> user;

            if ( user < 100 || user > 200 )
                cout << "Invalid answer." << endl;

        } while ( user < 100 || user > 200 );

        if ( user > random )
            cout << "Sorry, your answer is too high, try again." << endl;
        else if ( user < random )
            cout << "Sorry, your answer is too low, try again." << endl;
        else
            cout << "Congrats, you guessed the correct number, " << random << endl;

    } while ( user != random );
}


void computer()
{
    int highest = 101, lowest = 100, random = lowest + ( rand() % highest ), guess;

    do
    {
        guess = lowest + ( rand() % highest );
        cout << "The computer's guess is " << guess << endl;

        if ( guess == random )
        {
            cout << "Congrats, you guessed the correct number, " << random << endl;
            break;
        }

        else
        {
            if ( guess > random )
            {
                cout << "Sorry, your answer is too high, try again." << endl;
                highest = guess - lowest;
            }
            else
            {
                cout << "Sorry, your answer is too low, try again." << endl;
                lowest = guess;
            }
        }

    } while ( guess != random );
}


/*
 * EXECUTING SAMPLE:
 *
 * Would you like to (p)play or watch the (c)computer play?
 * p
 * Enter your guess between 100 and 200:
 * 138
 * Sorry, your answer is too low, try again.
 * Enter your guess between 100 and 200:
 * 167
 * Sorry, your answer is too high, try again.
 * Enter your guess between 100 and 200:
 * 149
 * Sorry, your answer is too low, try again.
 * Enter your guess between 100 and 200:
 * 154
 * Sorry, your answer is too low, try again.
 * Enter your guess between 100 and 200:
 * 160
 * Sorry, your answer is too low, try again.
 * Enter your guess between 100 and 200:
 * 165
 * Sorry, your answer is too high, try again.
 * Enter your guess between 100 and 200:
 * 164
 * Congrats, you guessed the correct number, 164
 *
 * Would you like to (p)play or watch the (c)computer play or (q)quit?
 * c
 * The computer's guess is 171
 * Sorry, your answer is too high, try again.
 * The computer's guess is 111
 * Sorry, your answer is too low, try again.
 * The computer's guess is 166
 * Sorry, your answer is too high, try again.
 * The computer's guess is 147
 * Sorry, your answer is too high, try again.
 * The computer's guess is 129
 * Sorry, your answer is too high, try again.
 * The computer's guess is 111
 * Sorry, your answer is too low, try again.
 * The computer's guess is 126
 * Sorry, your answer is too high, try again.
 * The computer's guess is 119
 * Sorry, your answer is too high, try again.
 * The computer's guess is 113
 * Congrats, you guessed the correct number, 113
 *
 * Would you like to (p)play or watch the (c)computer play or (q)quit?
 * q
 *
 *
 * Process finished with exit code 0
 */