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

        if ( choice == 'c')
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
    int random = 100 + ( rand() % ( 200 - 100 + 1 ));
    int highest = 200, lowest = 100, guess;

    do
    {
        guess = ( highest + lowest ) / 2;
        cout << guess << endl;

        if ( guess > random )
        {
            cout << "Sorry, your answer is too high, try again." << endl;
            highest = guess;
        }
        else if ( guess < random )
        {
            cout << "Sorry, your answer is too low, try again." << endl;
            lowest = guess;
        }
        else
        {
            cout << "Congrats, you guessed the correct number, " << random << endl;
        }

    } while ( random != guess );
}
