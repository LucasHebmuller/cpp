/**
 * qSolver.cpp:
 * Program to display and solve an equation
 *
 * @author Lucas Hebmuller
 */


#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    double a,b,c,x,y;

    cout << "What is the a term? ";
    cin >> a;

    cout << "What is the b term? ";
    cin >> b;

    cout << "What is the c term? ";
    cin >> c;

    cout << "What is the x value? ";
    cin >> x;

    y = ( (a*x) + (b*x) + c);

    cout << "For the equation " << a <<"x^2 + " << b << "x + " << c << ",when x is " << x << " y is " << y;

    return 0;
};

/*
 * EXECUTION SAMPLE:
 * What is the a term?3
 * What is the b term?4
 * What is the c term?7
 * What is the x value?1
 * For the equation 3x^2 + 4x + 7,when x is 1 y is 14
 */
