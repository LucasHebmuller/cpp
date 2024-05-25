//
// Created by lqh5511 on 11/18/2022.
//

#include "Triangle.h"


Triangle::Triangle(double b, double h)
{
    setBase( b );
    setHeight( h );
}

double Triangle::getBase() const
{
    return base;
}

double Triangle::getHeight() const
{
    return height;
}

void Triangle::setBase( double b )
{
    base = b;
}

void Triangle::setHeight( double h )
{
    height = h;
}

double Triangle::computeArea()
{
    return 0.5 * base * height;
}

