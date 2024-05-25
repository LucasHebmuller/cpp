/**
 * palindrome.cpp:
 * The program should prompt the user for a word and then find out if the word is a palindrome or not.
 *
 * @author Lucas Hebmuller
 */


#include <iostream>
#include <string>
#include <cctype>

using namespace std;


bool is_palindrome(string word);


int main()
{
    string term;

    cout << "Please enter a word:";
    cin >> term;

    if ( is_palindrome(term) )
    {
        cout << "This is a palindrome" << endl;
    }
    else
    {
        cout << "This is not a palindrome" << endl;
    }


    return 0;
}


bool is_palindrome ( string word )
{
    int length = word.length();

    for ( int i = 0; i < length; i++ )
    {
        char c1 = tolower( word[i] );
        char c2 = tolower( word[word.length() - i - 1] );

        if ( c1 != c2 )
            return false;
    }
    return true;
}


/*
 * SAMPLE EXECUTION:
 * Please enter a word: Hannah
 * This is a palindrome
 */