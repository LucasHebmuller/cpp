#include <iostream>
#include <iomanip>
using namespace std;


class Rectangle
{
    private:
        double width;
        double length;
    public:
        void setWidth(double);
        void setLength(double);
        double getWidth() const;
        double getLength() const;
        double getArea() const;
};


void Rectangle::setWidth(double w)
{
    width = w;
}

void Rectangle::setLength(double len)
{
    length = len;
}

double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::getLength() const
{
    return length;
}

double Rectangle::getArea() const
{
    return width * length;
}


int main()
{
    Rectangle box;
    double rectWidth;
    double rectLength;
    const int SPACE = 10;

    cout << "This program will calculate the area of a rectangle." << endl;
    cout << "What is the width?";
    cin >> rectWidth;
    cout << "What is the length?";
    cin >> rectLength;
    cout << endl;

    box.setWidth(rectWidth);
    box.setLength(rectLength);

    cout << "Here is the rectangle's data:" << endl;
    cout << left << setw(SPACE) << "Width:" << box.getWidth() << endl;
    cout << left << setw(SPACE) << "Length:" << box.getLength() << endl;
    cout << left << setw(SPACE) << "Area:" << box.getArea() << endl;


    return 0;
}