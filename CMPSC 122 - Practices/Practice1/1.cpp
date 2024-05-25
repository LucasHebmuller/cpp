#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


void getAccidents( int [], string [], int );
void findLowest( int [], string [], int, int);


int main()
{
    const int SIZE = 5, SPACE = 18;
    string regions[SIZE] = {"north", "south", "east", "west", "central"};
    int accidents[SIZE];

    getAccidents( accidents, regions, SIZE );
    findLowest( accidents, regions, SIZE , SPACE );


    return 0;
}


void getAccidents( int accidents[], string regions[], int SIZE )
{
    for ( int i = 0; i < SIZE; i++ )
    {
        cout << "Enter the number of accidents for region " << regions[i] << ":";
        cin >> accidents[i];
    }

    cout << endl;
}


void findLowest( int accidents[], string regions[], int SIZE, int SPACE )
{
    int lowest = accidents[0];
    string safest = regions[0];

    cout << "Accidents per region:" << endl;
    for ( int i = 0; i < SIZE; i++ )
    {
        cout << left << setw(SPACE) << regions [i] << accidents[i] << endl;
    }

    cout << endl;

    for ( int i = 1; i < SIZE; i++ )
    {
        if ( accidents[i] < lowest )
        {
            lowest = accidents[i];
            safest = regions[i];
        }
    }

    cout << "The safest region is the " << safest << " region with a total of " << lowest << " accidents" << endl;
}
