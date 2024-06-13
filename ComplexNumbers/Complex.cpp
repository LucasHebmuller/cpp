/*---Complex.cpp------------------------------------------------
This file implements the Complex function members.

@author Lucas Hebmuller
------------------------------------------------------------*/

#include "Complex.h"

Complex::Complex()
{
    myImaginary = 0;
    myReal = 0;
}

Complex::Complex(unsigned imaginary, unsigned real)
{
    myImaginary = imaginary;
    myReal = real;
}

unsigned Complex::getImaginary() const
{
    return myImaginary;
}

unsigned Complex::getReal() const
{
    return myReal;
}

void Complex::set(unsigned imaginary, unsigned real)
{
    myImaginary = imaginary;
    myReal = real;
}

void Complex::display(ostream & out) const
{
    out << myImaginary << "i" << " " << "+" << " " << myReal;
}

ostream & operator<<(ostream & out, const Complex & c)
{
    t.display(out);
    return out;
}

unsigned operator+(const Complex & c1, const Complex & c2)
{
    Complex c;
    c.set( (c1.getImaginary() + c2.getImaginary()), ((c1.getReal) + c2.getReal()) );
    return c;
}

