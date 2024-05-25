#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    const int WIDTH = 2;
    int n;

    cout << "Chose a number to calculate the multiplication table: " << endl;
    cin >> n;

    for ( int i = 10; i > 0; i-- )
    {
        cout << left << setw(WIDTH) << i << " x " << n << " = " << right << setw(WIDTH) << ( i * n ) << endl;
    }

    return 0;
}