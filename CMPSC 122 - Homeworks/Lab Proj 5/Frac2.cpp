//
// Name: Lucas Hebmuller
//
// a Fraction object holds one Fraction number, one fraction
#include "Frac2.h"

Fraction::Fraction(int n, int d)
{
    numerator = (d < 0 ? -n : n);
    denominator = (d < 0 ? -d : d);
    reduce();
}


void Fraction::reduce() {
    int n = numerator < 0 ? -numerator : numerator;
    int d = denominator;
    int largest = n > d ? n : d;
    int gcd = 0;
    for (int loop = largest; loop >= 2; loop--)
        if (numerator % loop == 0 && denominator % loop == 0)
        {
            gcd = loop;
            break;
        }
    if (gcd != 0)
    {
        numerator /= gcd;
        denominator /= gcd;
    }
}


Fraction Fraction::operator+(Fraction& b)
{
    Fraction t;
    t.numerator = b.numerator * denominator + b.denominator * numerator;
    t.denominator = b.denominator * denominator;
    t.reduce();
    return t;
}


Fraction Fraction::operator-(Fraction& b)
{
    Fraction t;
    t.numerator = b.denominator * numerator - b.numerator * denominator;
    t.denominator = b.denominator * denominator;
    t.reduce();
    return t;

}


Fraction Fraction::operator*(Fraction& b)
{
    Fraction t;
    t.numerator = b.numerator * numerator;
    t.denominator = b.denominator * denominator;
    t.reduce();
    return t;
}


Fraction Fraction::operator/(Fraction& b)
{
    Fraction t;
    t.numerator = b.denominator * numerator;
    t.denominator = b.numerator * denominator;
    if ( t.denominator == 0)
        cout << endl << "DIVIDE BY ZERO ERROR!!!" << endl;
    else
    {
        t.reduce();
        return t;
    }
}


void Fraction::Display(std::ostream &out)
{
    if ( denominator == 1 )
        out << numerator;
    else
        out << numerator << "/" << denominator;
}


ostream& operator<<(ostream& out, Fraction& a)
{
    a.Display(out);
    return out;
}


bool Fraction::operator>(Fraction &b)
{
    return ( (numerator / denominator) > (b.numerator/b.denominator) );
}


bool Fraction::operator<(Fraction &b)
{
    return ( (numerator / denominator) < (b.numerator/b.denominator) );
}




