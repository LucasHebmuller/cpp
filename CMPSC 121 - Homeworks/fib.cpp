/**
 * fib.cpp:
 * The program should prompt the user for a number and then display the Fibonacci Number sequence until it reaches the term that refers to the number prompted by the user.
 *
 * @author Lucas Hebmuller
 */


#include <iostream>

using namespace std;


void FibonacciNumber( int n, int& fib_no );


int main()
{
    do
    {
        int number;

        cout << "Please enter the nth. term Fibonacci number to compute:";
        cin >> number;

        if ( number <= 0)
        {
            cout <<  "Please enter a number greater than 0!" << endl;
        }
        else
            FibonacciNumber( number, number );
            break;
    } while(true);
}


void FibonacciNumber ( int n, int& fib_no )
{
    int c, n1 = 0, n2 = 1, n3, term;

    cout << "The Fibonacci series is: ";

    for ( c = 1; c <= n; c++ )
    {
        if ( c != n )
            cout << n1 << ", ";
        else
            cout << n1 << endl;
            term = n1;
       n3 = (n1+n2);
       n1 = n2;
       n2 = n3;
    }

    cout << "The " << fib_no << "th. term is: " << term;
}


/*
 * SAMPLE EXECUTION:
 * Please enter the nth. term Fibonacci number to compute:10
 * The Fibonacci series is: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
 * The 10th. term is: 34
 */
