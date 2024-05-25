//
// Created by lqh5511 on 1/31/2023.
//

#include "Point.h"
#include <cmath>
#include <iostream>



Point::Point()
{
    _x = 0.0;
    _y = 0.0;
}

Point::Point( double x, double y )
{
    this -> _x = x;
    this -> _y = y;
}


double Point::x() const
{
    return _x;
}


double Point::y() const
{
    return _y;
}


double Point::magnitude() const
{
    double r;
    r = pow(_x,2) + pow(_y, 2);
    r = sqrt(r);

    return r;
}


void Point::move( double dx, double dy )
{
    _x = _x + dx;
    _y = _y + dy;
}


void Point::print( ostream & out ) const
{
    out << "(" << _x << " , " << _y << ")" << endl;
}
