/**
 * rectangle.cpp:
 * The program should prompt the user for the length and width of a rectangle and then display its area. Then, the program should double the dimensions until the area is equal or greater than 500.
 *
 * @author Lucas Hebmuller
 */


#include <iostream>
using namespace std;


struct Rectangle
{
    int length;
    int width;
    int area;
};


Rectangle getRectangle( Rectangle var );
Rectangle doubleDimensions( Rectangle var );


int main()
{
    Rectangle dimensions;

    dimensions = getRectangle( dimensions );
    doubleDimensions( dimensions );


    return 0;
}


Rectangle getRectangle( Rectangle var )
{
    do
    {
        cout << "Enter the starting length:";
        cin >> var.length;

        if ( var.length <= 0 )
            cout << "Please enter a length greater than zero!" << endl;

    } while ( var.length <= 0 );

    do
    {
        cout << "Enter the starting width:";
        cin >> var.width;

        if ( var.width <= 0 )
            cout << "Please enter a width greater than zero!" << endl;

    } while ( var.width <= 0 );

    var.area = var.length * var. width;


    return var;
}


Rectangle doubleDimensions( Rectangle var )
{
    do
    {
        cout << var.length << " x " << var.width << " = " << var.area << endl;


        var.length *= 2;
        var.width *= 2;
        var.area = var.length * var.width;
    } while ( var.area < 500 );

    cout << var.length << " x " << var.width << " = " << var.area << endl;


    return var;
}


/*
 * EXECUTION SAMPLE:
 * Enter the starting length:-4
 * Please enter a length greater than zero!
 * Enter the starting length:5
 * Enter the starting width:0
 * Please enter a width greater than zero!
 * Enter the starting width:4
 * 5 x 4 = 20
 * 10 x 8 = 80
 * 20 x 16 = 320
 * 40 x 32 = 1280
 */