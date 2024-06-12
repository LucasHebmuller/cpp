/*---Complex.h------------------------------------------------
This header file defines the data type Complex for processing
operations with complex numbers.

@author Lucas Hebmuller
------------------------------------------------------------*/

#include <iostream>

#ifndef COMPLEX
#define COMPLEX

class Complex
{
    public:
        //---Class constructors---
        Complex();
        Complex(unsigned imaginary, unsigned real);

        //---Acessors---
        unsigned getImaginary() const;
        unsigned getReal() const;

        //---Output---
        void display(ostream & out) const;

        //---Set operation---
        void set(unsigned imaginary, unsigned real);

    private:
        unsigned myImaginary;
        unsigned myReal;
}

unsigned operator+(const Complex & n1, const Complex & n2);

#endif