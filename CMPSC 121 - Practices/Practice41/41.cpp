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

double Rectangle::getArea() const
{
    return width * length;
}


int main()
{
    cout << fixed << setprecision(2);

    double number, totalArea;
    Rectangle *kitchen = nullptr;
    Rectangle *bedroom = nullptr;
    Rectangle *den = nullptr;

    kitchen = new Rectangle;
    bedroom = new Rectangle;
    den = new Rectangle;

    cout << "What is the kitchen's length?";
    cin >> number;
    kitchen ->setLength(number);
    cout << "What is the kitchen's width?";
    cin >> number;
    kitchen ->setWidth(number);
    cout << endl;

    cout << "What is the bedroom's length?";
    cin >> number;
    bedroom ->setLength(number);
    cout << "What is the bedroom's width?";
    cin >> number;
    bedroom ->setWidth(number);
    cout << endl;

    cout << "What is the den's length?";
    cin >> number;
    den ->setLength(number);
    cout << "What is the den's width?";
    cin >> number;
    den ->setWidth(number);
    cout << endl;

    totalArea = kitchen ->getArea() + bedroom ->getArea() + den ->getArea();

    cout << "The total area of the three rooms is: " << totalArea << endl;


    delete kitchen;
    delete bedroom;
    delete den;
    kitchen = nullptr;
    bedroom = nullptr;
    den = nullptr;


    return 0;
}