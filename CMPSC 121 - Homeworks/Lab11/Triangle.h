/**
 * Triangle.h:
 * Class to represent a Triangle in C++
 *
 * @author Lucas Hebmuller
 */

#ifndef LAB11_TRIANGLE_H
#define LAB11_TRIANGLE_H


class Triangle
{
    private:
        double base, height;
    public:
        Triangle( double b, double h);
        double getBase() const;
        double getHeight() const;
        void setBase( double b );
        void setHeight( double h );
        double computeArea();
};


#endif //LAB11_TRIANGLE_H
