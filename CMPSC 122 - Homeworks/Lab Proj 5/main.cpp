#include <iostream>
#include "Frac2.h"
using namespace std;


int main()
{
    Fraction c(7, 3), d(3, 9), x;

    cout << c;
    cout << " + ";
    cout << d;
    cout << " = ";
    x = c + d;
    cout << x;

    cout << '\n';

    cout << c;
    cout << " - ";
    cout << d;
    cout << " = ";
    x = c - d;
    cout << x;

    cout << '\n';

    cout << c;
    cout << " * ";
    cout << d;
    cout << " = ";
    x = c * d;

    cout << x;

    cout << '\n';

    cout << c;
    cout << " / ";
    cout << d;
    cout << " = ";
    x = c / d;
    cout << x;

    cout << '\n';

    cout << c;
    cout << " is:\n";
    cout << ((c > d) ? "  > " : "  <= ");
    cout << d;
    cout << " according to the overloaded > operator\n";
    cout << ((c < d) ? "  < " : "  >= ");
    cout << d;
    cout << " according to the overloaded < operator\n";


/* uncomment this line for improved version
//   c.printFraction();
cout << c;
cout << " + ";
//   d.printFraction();
cout << c;
cout << " / ";
cout << d;
cout << " - ";
cout << d;
cout << " * ";
cout << c;
cout << " = ";
x = c + c / d - d * c; // cascading use of operators
//   x.printFraction();
cout << x;
cout << '\n';
*/  // uncomment this line for improve version


    return 0;
}