/**
 * circle.cpp:
 * This program should calculate the area of a circle using a class.
 *
 * @author Lucas Hebmuller.
*/


#include <iostream>
#include <iomanip>
#include "Circle.h"
using namespace std;


int main()
{
    cout << fixed << setprecision(2);

    double tempRadius = 0.0;

    do
    {
        cout << "Enter the radius of the circle: ";
        cin >> tempRadius;

        if ( tempRadius <= 0 )
            cout << "Error: radius should be greater than 0. Please try again" << endl;
    } while ( tempRadius <= 0 );

    Circle circle( tempRadius );

    cout << endl << "The area of the circle with radius " << circle.getRadius() << " is " << circle.computeArea() << endl;


    return 0;
}
