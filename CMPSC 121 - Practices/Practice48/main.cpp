#include <iostream>
using namespace std;


void CountDown( int n );
int Factorial( int n );


int main()
{
    int number, factorial;

    cout << "Enter a number:";
    cin >> number;

    CountDown( number );
    factorial = Factorial( number );

    cout << "The factorial of " << number << " is " << factorial << endl;


    return 0;
}


void CountDown( int n )
{
    if ( n > 0 )
    {
        cout << n << "..." << endl;
        CountDown( n - 1 );
    }
}


int Factorial ( int n )
{
    if ( n > 0 )
    {
        return n * Factorial( n - 1 );
    }
    else
    {
        return 1;
    }
}