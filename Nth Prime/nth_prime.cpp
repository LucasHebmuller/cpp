/**
 * nth_prime.cpp:
 * This program should find if a n number is prime or not.
 *
 * @author Lucas Hebmuller
*/


#include <iostream>
using namespace std;


int getNumber();
bool isPrime( int );


int main()
{
    int n;

    n = getNumber();

    if ( isPrime( n ) )
        cout << n << " is a prime number";
    else
        cout << n << " is not a prime number";
}


int getNumber()
{
    int value;

    cout << "Enter a number:";
    cin >> value;

    return value;
}


bool isPrime( int val )
{
    int count = 0;

    for ( int i = 1; i <= val; i++ )
    {
        if ( val % i == 0 )
            count++;
    }

    if ( count == 2 )
        return true;
    else
        return false;
}