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
    Complex(int imaginary, int real);

    //---Acessors---
    int getImaginary() const;
    int getReal() const;

    //---Output---
    void display(std::ostream & out) const;

    //---Set operation---
    void set(int imaginary, int real);

private:
    int myImaginary;
    int myReal;
};

std::ostream & operator<<(std::ostream & out, const Complex & c);
//int operator+(const Complex & c1, const Complex & c2);

#endif
