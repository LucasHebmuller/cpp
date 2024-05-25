/**
* reverse_string.cpp:
* The program should reverse a string.
*
* @author Lucas Hebmuller
*/


#include <iostream>
#include <string>
using namespace std;


int main()
{
    string original, reverse;

    cout << "Type a string:";
    getline(cin, original);

    reverse = original;

    for ( int i = 0 ; i < original.length(); i++ )
    {
        reverse[i] = original[ original.length() - (i + 1) ];
    }

    cout << reverse;

    return 0;
}