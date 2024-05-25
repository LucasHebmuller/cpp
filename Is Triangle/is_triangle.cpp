/**
 * is_triangle.cpp:
 * This program should say if it is a triangle, and if so, what type of triangle it is.
 *
 * @author Lucas Hebmuller
*/


#include <iostream>
using namespace std;


void getSides(double &, double &, double &);
bool isTriangle(double, double, double);


int main()
{
    double n1, n2, n3;

    getSides(n1, n2, n3);

    if ( isTriangle(n1, n2, n3) )
    {
        if ( n1 == n2 && n2 == n3 && n1 == n3 )
            cout << "It is an equilateral triangle";
        else if ( (n1 == n2 && n1 != n3 ) || (n1 == n3 && n3 != n2) || ( n2 == n3 && n2 != n1) )
            cout << "It is an isosceles triangle";
        else
            cout << "It is a scalene triangle";
    }
    else
        cout << "It is not a triangle";


    return 0;
}


void getSides(double &s1, double &s2, double &s3)
{
    cout << "Enter the first side of the triangle:";
    cin >> s1;

    cout << "Enter the second side of the triangle:";
    cin >> s2;

    cout << "Enter the third side of the triangle:";
    cin >> s3;

    cout << endl;
}


bool isTriangle(double s1, double s2, double s3)
{
    if ( (s1 + s2) > s3 &&  (s3 + s2) > s1 && (s1 + s3) > s2 )
        return true;
    else
        return false;
}