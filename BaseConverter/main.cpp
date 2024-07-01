#include <iostream>
using namespace std;
#include "Stack.h"

int main()
{
    unsigned number,
             remainder;
    Stack stackOfRemainders;

    char response;
    do {
        cout << "Enter a positive integer to convert: ";
        cin >> number;
        while (number != 0) {
            remainder = number % 2;
            stackOfRemainders.push(remainder);
            number /= 2;
        }

        cout << "Binary respresentation: ";
        while (!stackOfRemainders.empty()) {
            remainder = stackOfRemainders.top();
            stackOfRemainders.pop();
            cout << remainder;
        }

        cout << endl << endl;
        cout << "More (Y or N)? ";
        cin >> response;
    } while (response == 'Y' || response == 'y');

    return 0;
}
