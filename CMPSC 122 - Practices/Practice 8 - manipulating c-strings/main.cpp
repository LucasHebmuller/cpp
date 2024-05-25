#include <iostream>
#include <cstring>
using namespace std;


void Shuffle(char *);
void removeFirstHalf(char *);


int main()
{
    char string1[] = {"GREMIO"};
    char string2[] = {"GREMIO"};
    cout << string1 << endl;
    cout << string2 << endl;

    cout << endl;

    Shuffle(string1);
    removeFirstHalf(string2);
    cout << string1 << endl;
    cout << string2 << endl;


    return 0;
}


void Shuffle(char * str)
{
    int len = strlen(str);

    for ( int i = 0; i < len/2; i++)
    {
        char temp = str[i];
        str[i] = str[i + len/2];
        str[i + len/2] = temp;
    }
}


void removeFirstHalf(char * str)
{
    int len = strlen(str);

    for ( int i = 0; i < len; i++ )
        str[i] = str[i + len/2];
    str[len/2] = '\0';
}

