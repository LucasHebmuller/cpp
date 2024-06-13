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

Complex::Complex(int imaginary, int real)
{
    myImaginary = imaginary;
    myReal = real;
}

int Complex::getImaginary() const
{
    return myImaginary;
}

int Complex::getReal() const
{
    return myReal;
}

void Complex::set(int imaginary, int real)
{
    myImaginary = imaginary;
    myReal = real;
}

void Complex::display(std::ostream & out) const
{
    out << myImaginary << "i" << " " << "+" << " " << myReal;
}

std::ostream & operator<<(std::ostream & out, const Complex & c)
{
    c.display(out);
    return out;
}

/*
int operator+(const Complex & c1, const Complex & c2)
{
    Complex c;
    c.set( c1.getImaginary() + c2.getImaginary(), c1.getReal() + c2.getReal() );
    return c;
}
*/


