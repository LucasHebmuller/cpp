//
// Created by lucas on 12/29/2022.
//

#ifndef PRACTICE55_CIRCLE_H
#define PRACTICE55_CIRCLE_H


class Circle
{
    private:
        double radius;
    public:
        Circle( double r );
        double getRadius() const;
        void setRadius( double r );
        double computeArea();
};


#endif //PRACTICE55_CIRCLE_H
