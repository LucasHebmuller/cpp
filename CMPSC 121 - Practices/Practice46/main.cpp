#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;


int main()
{
    srand( ( unsigned )  time (nullptr) );
    const int SPACE = 3;

    cout << "Rolling two dices:" << endl;
    for ( int i = 1; i < 13; i++ )
    {
        int d1 = rand() % ( 6 - 1 + 1 ) + 1; // ( max value - min value + 1 ) + min value
        int d2 = rand() % ( 6 - 1 + 1 ) + 1;
        cout << setw(2) << i << "." << setw(SPACE) << d1 << setw(SPACE) << d2 << endl;
    }


    return 0;
}