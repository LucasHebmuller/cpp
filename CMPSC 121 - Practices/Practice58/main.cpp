#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    const int SPACE = 10;
    const double FEE = 0.04;
    double membership = 2500;

    cout << fixed << setprecision(2);

    for ( int i = 1; i < 7; i++ )
    {
        cout << left << setw(SPACE) << i;
        cout << "$" <<  membership + ( membership * FEE ) << endl;

        membership = membership + ( membership * FEE );
    }


    return 0;
}