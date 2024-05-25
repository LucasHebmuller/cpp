#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;


int main()
{
    char phrase[] = "I am studying at Nick Building before my math class";
    int len = strlen(phrase);

    for ( int i = 0; i < len; i++)
    {
        if (phrase[i] == 's')
        {
            for ( int j = i; j < len; j++ )
            {
                if ( phrase[j] == ' ')
                    break;
                phrase[j] = toupper(phrase[j]);
            }
            break;
        }
    }
    cout << phrase << endl;


    return 0;
}