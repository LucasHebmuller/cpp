#include <iostream>
#include "Rect.h"
using namespace std;


int main()
{
    Rect r(5, 3);
    cout << r.GetArea() << endl;
    if ( r.isItASquare() )
        cout << "It is a square" << endl;
    else
        cout << "It is not a square" << endl;


    return 0;
}