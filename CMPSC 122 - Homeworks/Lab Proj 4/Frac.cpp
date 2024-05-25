//
// Name: Lucas Hebmuller
//
// a Fraction object holds one Fraction number, one fraction

#include <iostream>
#include "Frac.h"
using namespace std;


Fraction::Fraction(int n, int d)
{
    numerator = (d < 0 ? -n : n);
    denominator = (d < 0 ? -d : d);
    reduce();
}


Fraction Fraction::add(const Fraction& a)
{
    Fraction t;
    t.numerator = a.numerator * denominator + a.denominator * numerator;
    t.denominator = a.denominator * denominator;
    t.reduce();
    return t;
}


Fraction Fraction::subtract(const Fraction& a)
{
    Fraction t;
    t.numerator = a.denominator * numerator - a.numerator * denominator;
    t.denominator = a.denominator * denominator;
    t.reduce();
    return t;
}


Fraction Fraction::multiply(const Fraction& a)
{
    Fraction t;
    t.numerator = a.numerator * numerator;
    t.denominator = a.denominator * denominator;
    t.reduce();
    return t;
}


Fraction Fraction::divide(const Fraction& a)
{
    Fraction t;
    t.numerator = a.denominator * numerator;
    t.denominator = a.numerator * denominator;
    if ( t.denominator == 0)
        cout << endl << "DIVIDE BY ZERO ERROR!!!" << endl;
    else
    {
        t.reduce();
        return t;
    }
}


void Fraction::printFraction()
{
    if (denominator == 0)
        cout << endl << "DIVIDE BY ZERO ERROR!!!" << endl;
    else
        cout << numerator << "/" << denominator;
}


void Fraction::printFractionAsFloat()
{
    if (denominator == 0)
        cout << endl << "DIVIDE BY ZERO ERROR!!!" << endl;
    else
        cout << float(numerator) / float(denominator);
}


void Fraction::reduce()
{
    int n = numerator < 0 ? -numerator : numerator;
    int d = denominator;
    int largest = n > d ? n : d;
    int gcd = 0;
    for (int loop = largest; loop >= 2; loop--)
        if (numerator % loop == 0 && denominator % loop == 0) {
            gcd = loop;
            break;
        }
    if (gcd != 0) {
        numerator /= gcd;
        denominator /= gcd;
    }
}