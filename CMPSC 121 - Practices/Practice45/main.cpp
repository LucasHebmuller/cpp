#include <iostream>
#include <iomanip>
#include "Triangle.h"
using namespace std;


int main()
{
    cout << fixed << setprecision(2);

    double tempBase = 0.0, tempHeight = 0.0;

    do
    {
        cout << "Please enter the base:";
        cin >> tempBase;

        if ( tempBase <= 0)
        {
            cout << "That is an invalid base" << endl;
        }
    } while( tempBase <= 0 );

    do
    {
        cout << "Please enter the height:";
        cin >> tempHeight;

        if ( tempHeight <= 0)
        {
            cout << "That is an invalid height" << endl;
        }

    } while( tempHeight <= 0 );

    Triangle triangle( tempBase, tempHeight );

    cout << "The area of the triangle with base " << triangle.getBase()  << " and height " << triangle.getHeight() << " is " << triangle.computeArea() << " m^2 " << endl;


    return 0;
}


/*
 * EXECUTION SAMPLE:
 * Please enter the base: 2.25
 * Please enter the height: -2.99
 * That is an invalid height
 * Please enter the height: 3.12
 * The area of the triangle with base 2.25 and height 3.12 is 3.51 m^2
 */



