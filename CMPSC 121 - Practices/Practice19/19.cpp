#include <iostream>

using namespace std;


int divide ( int, int);


int main()
{
    int value1, value2, total;

    cout << "Type two values and I will divide the first by the second:";
    cin >> value1 >> value2;

    total = divide( value1, value2 );

    cout << "The division of " << value1 << " by " << value2 << " is equal to " << total;


    return 0;
}


int divide ( int number1, int number2)
{
   return number1 / number2;
}