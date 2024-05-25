#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


void division(double, double);
void multiplication(int, int);


int main()
{
    int value1, value2;

    cout << fixed << setprecision(1);

    do
    {
     cout << "Type an odd value: ";
     cin >> value1;
     if ( value1 % 2 == 0)
     {
         cout << "Invalid value. Try again" << endl;
     }
     cout << endl;
    }while ( value1 % 2 == 0);

    do
    {
        cout << "Type another odd value :";
        cin >> value2;
        if ( value2 % 2 == 0)
        {
            cout << "Invalid value. Try again" << endl;
        }
        cout << endl;
    }while ( value2 % 2 == 0);

    multiplication( value1, value2);
    division( value1, value2);


    return 0;
}

void division(double number1, double number2)
{
  cout << "The division of " << number1 << " by "<< number2 << " is equal to " << number1 / ( number2 * 1.0 ) << endl;
}

void multiplication(int number1, int number2)
{
    cout << "The multiplication of " << number1 << " by " << number2 << " is equal to " << number1 * number2 << endl;
}