#include <iostream>

using namespace std;


int evenOrOdd(int value);

int main()
{
    char letter;
    static int sum;

    do{
        int number;

        cout << "Type a number:";
        cin >> number;
        sum = evenOrOdd(number);

        cout << "Do you want to continue(Y or N)?";
        cin >> letter;

        cout << endl;
    } while ( letter == 'Y');


    cout << "The sum of all even numbers was: " << sum;

    return 0;
}

int evenOrOdd(int value)
{
    static int total;
    if ( value % 2 == 0)
        total = total + value;

    return total;

}