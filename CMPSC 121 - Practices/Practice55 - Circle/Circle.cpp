//
// Created by lucas on 12/29/2022.
//

#include "Circle.h"


const double PI = 3.1415;

Circle::Circle(double r)
{
   setRadius( r );
}

double Circle::getRadius() const
{
    return radius;
}

void Circle::setRadius( double r )
{
    radius = r;
}

double Circle::computeArea()
{
    return PI * radius * radius;
}
