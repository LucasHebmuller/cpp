#include <iostream>
using namespace std;


int main()
{
    int height, width;
    char symbol;

    cout << "Height:";
    cin>> height;
    cout << "Width:";
    cin >> width;
    cout << "Symbol:";
    cin >> symbol;

    for ( int i = 1; i <= height; i++ )
    {
        for ( int j = 1; j <= width; j++ )
        {
            cout << " " << symbol;
        }
        cout << endl;
    }


    return 0;
}