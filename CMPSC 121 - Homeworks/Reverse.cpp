/**
 * reverse.cpp:
 * The program should prompt the user for a string and then reverse the case of every letter in the first word of the string.
 *
 * @author Lucas Hebmuller
 */


#include <iostream>
#include <cctype>
#include <string>

using namespace std;

string reverse(string string);


int main()
{
    string phrase, modified;

    cout << "Please enter a string below:" << endl;
    getline ( cin, phrase);

    modified = reverse(phrase);

    cout << "Your modified string:" << endl << modified << endl;


    return 0;
}


string reverse(string string)
{
    int length = string.length();

    for ( int i = 0; i < length; i++ )
    {
        if ( isalpha(string[i]) )
        {
            if ( islower(string[i]))
            {
                string[i] = toupper(string[i]);
            }
            else if ( isupper(string[i]))
            {
                string[i] = tolower(string[i]);
            }
        }
        else
            return string;
    }
}


/*
 * SAMPLE EXECUTION
 * Please enter a string below:
 * Brazil is going to win the World Cup this year
 * Your modified string:
 * bRAZIL is going to win the World Cup this year
 */