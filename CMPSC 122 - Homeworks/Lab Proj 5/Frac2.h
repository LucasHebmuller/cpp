
//
// Name: Lucas Hebmuller
//
// a Fraction object holds one Fraction number, one fraction


#ifndef FRAC2_H
#define FRAC2_H


#include <iostream>
using namespace std;


class Fraction
{
    public:
        Fraction(int = 0, int = 1);
        Fraction operator+(Fraction& b);
        Fraction operator-(Fraction& b);
        Fraction operator*(Fraction& b);
        Fraction operator/(Fraction& b);
        void Display( ostream& out );
        bool operator>(Fraction& b);
        bool operator<(Fraction& b);

    private:
        int numerator;
        int denominator;
        void reduce();
};
ostream& operator<<(ostream& out, Fraction& a);


#endif