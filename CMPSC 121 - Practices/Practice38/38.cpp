#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


struct Circle
{
    double diameter;
    double radius;
    double area;
};


Circle getInfo();


int main()
{
    cout << fixed << setprecision(2);

    const double PI = 3.1415;
    Circle c;

    c = getInfo();

    c.area = PI * pow(c.radius,2);

    cout << "The radius of the circle is " << c.radius << endl;
    cout << "The area of the circle is " << c.area << endl;


    return 0;
}


Circle getInfo()
{
    Circle tempCircle;

    cout << "Enter the diameter of the circle:";
    cin >> tempCircle.diameter;
    tempCircle.radius = tempCircle.diameter / 2.0;


    return tempCircle;
}