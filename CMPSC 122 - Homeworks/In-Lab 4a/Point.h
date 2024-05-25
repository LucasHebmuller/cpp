//
// Created by lqh5511 on 1/31/2023.
//

#ifndef IN_LAB4A_POINT_H
#define IN_LAB4A_POINT_H


#include <iostream>
using namespace std;


class Point
{
    private:
        double _x, _y;

    public:
        Point();
        Point(double x, double y);
        double x() const;
        double y() const;
        double magnitude() const;
        void move( double dx, double dy );
        void print( ostream & out ) const;
};


#endif //IN_LAB4A_POINT_H
