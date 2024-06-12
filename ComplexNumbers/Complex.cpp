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



