#include <iostream>
#include <cctype>

using namespace std;


int main()
{
    char input;

    cout << "Enter any character:";
    cin >> input;

    cout << "The character entered is: " << endl;
    if ( isalpha(input))
        cout << "an alphabetic character";
    if ( isdigit(input))
        cout << " numerical digit";
    if ( isupper(input))
        cout << " upper case";
    if ( islower(input))
        cout << " lower case";


    return 0;
}