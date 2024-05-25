/**
 * table.cpp:
 * The program asks the user for two values and creates a multiplication table with these values.
 *
 * @author Lucas Hebmuller
 */


#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    int row, col, i, j;


    cout << "Let's build a multiplication table!" << endl;


    cout << "Enter the number of rows ( 1 to 12 inclusive ):";
    cin >> row;

    while ( row < 1 || row > 12 )
    {
        cout << "Invalid input, try again!" << endl;
        cout << "Enter the number of rows ( 1 to 12 inclusive ):";
        cin >> row;
    }


    cout << "Enter the number of columns ( 1 to 12 inclusive ):";
    cin >> col;

    while ( col < 1 || col > 12 )
    {
     cout << "Invalid input, try again!" << endl;
     cout << "Enter the number of columns ( 1 to 12 inclusive ):";
     cin >> col;
    }


    for (i = 1 ; i <= row ; i++ )
    {
        cout << endl;
        for ( j = 1; j <= col; j++ )
        {
            cout << setw(3) << i * j;
        }
    }


    return 0;
}


/*
 * SAMPLE EXECUTION:
 * Let's build a multiplication table!
 * Enter the number of rows ( 1 to 12 inclusive ):0
 * Invalid input, try again!
 * Enter the number of rows ( 1 to 12 inclusive ):3
 * Enter the number of columns ( 1 to 12 inclusive ):17
 * Invalid input, try again!
 * Enter the number of columns ( 1 to 12 inclusive ):4
    1  2  3  4
    2  4  6  8
    3  6  9 12

 */