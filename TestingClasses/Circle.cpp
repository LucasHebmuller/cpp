#include "Circle.h"
#include <cmath>


const double PI = 3.1415;


Circle::Circle(double r)
{
	setRadius(r);
}


double Circle::getRadius() const
{
	return radius;
}


void Circle::setRadius(double r)
{
	radius = r;
}


double Circle::computeArea()
{
	return pow(radius, 2) * PI;
}





