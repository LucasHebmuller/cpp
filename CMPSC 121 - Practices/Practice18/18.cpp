#include <iostream>

using namespace std;


void evenOrOdd(int);


int main()
{
    int value;

    cout << "Type a value to discover if it is even or odd:";
    cin >> value;
    evenOrOdd (value);


    return 0;
}


void evenOrOdd (int number )
{
    if ( number % 2 == 0)
        cout << number << " is even";
    else
        cout << number << " is odd";
}
