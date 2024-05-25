/**
 * mystring.cpp:
 * The program should prompt the user for a word and then manipulate that word in different ways using functions
 *
 * @author Lucas Hebmuller
 */


#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>

using namespace std;


string lower(string word);
string upper(string word);
string capitalize(string word);
string reverse(string word);


int main()
{
    do
    {
        string term, f1, f2, f3, f4;

        cout << "Please enter a word:";
        getline(cin, term);

        if ( term == "quit")
            break;

        f1 = lower(term);
        f2 = upper(term);
        f3 = capitalize(term);
        f4 = reverse(term);

        cout << "Lower case: " << f1 << endl;
        cout << "Upper case: " << f2 << endl;
        cout << "Capitalize: " << f3 << endl;
        cout << "Reverse: " << f4 << endl;

        cout << endl;

    } while( true );
}


string lower(string word)
{
    int length;
    length = word.length();

    for ( int i = 0; i < length; i++ )
    {
        word[i] = tolower(word[i]);
    }
    return word;
}


string upper(string word)
{
    int length;
    length = word.length();

    for ( int i = 0; i < length; i++ )
    {
        word[i] = toupper(word[i]);
    }
    return word;
}


string capitalize(string word)
{
    word[0] = toupper(word[0]);

    return word;
}


string reverse(string word)
{
   reverse(word.begin(), word.end());

    return word;
}


/*
 * SAMPLE EXECUTION:
 * Please enter a word:computer-science
 * Lower case: computer-science
 * Upper case: COMPUTER-SCIENCE
 * Capitalize: Computer-science
 * Reverse: ecneics-retupmoc
 */