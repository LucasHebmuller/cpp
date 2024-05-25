#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main()
{
    cout << setprecision(2) << fixed;

    const double PI = 3.1415;

    struct Circle
    {
        double radius;
        double diameter;
        double area;
    };

    Circle c;

    cout << "Enter the diameter of the circle (in cm):";
    cin >> c.diameter;

    c.radius = c.diameter / 2;
    c.area = PI * pow(c.radius, 2);

    cout << "The area of the circle is " << c.area << " cm" << endl;


    return 0;
}