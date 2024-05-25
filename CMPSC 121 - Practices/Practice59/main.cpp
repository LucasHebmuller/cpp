#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int main()
{
    srand( ( unsigned )  time (nullptr) );

    int random = rand() % 101, user;

    do
    {
        do
        {
            cout << "Try to guess the random number (between 0  and 100):";
            cin >> user;

            if ( user < 0 || user > 100 )
                cout << "Invalid answer." << endl;

        } while ( user < 0 || user > 100 );

       if ( user > random )
           cout << "Too high, try again." << endl;
       else if ( user < random )
           cout << "Too low, try again." << endl;
       else
           cout << "Congrats! You got the right number." << endl;

    } while ( user != random );


    return 0;
}
