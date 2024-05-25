#include <iostream>

using namespace std;


int main()
{
    const int SIZE = 5;
    int numbers[SIZE];

    for ( int &val : numbers )
    {
        cout << "Enter a value:";
        cin >> val;
    }

    cout << endl;

    cout << "You entered the values: ";
    for ( int i = 0; i < SIZE; i++ )
    {
        cout << numbers[i] << " ";
    }


    return 0;
}