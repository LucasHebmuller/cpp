/*---Complex.h------------------------------------------------
This header file defines the data type Complex for processing
operations with complex numbers.

@author Lucas Hebmuller
------------------------------------------------------------*/

#ifndef COMPLEX
#define COMPLEX

#include <iostream>

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
};

ostream & operator<<(ostream & out, const Complex & c);
unsigned operator+(const Complex & c1, const Complex & c2);

#endif