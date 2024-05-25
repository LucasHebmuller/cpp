#include <iostream>
#include "Frac.h"
using namespace std;

int main() {
    Fraction x(-3,8), y(-15,-20), z, w(5);

    x.printFraction();  cout << " + ";  y.printFraction();
    z = x.add(y);
    cout << " = ";  z.printFraction();  cout << endl;
    z.printFraction();
    cout << " = ";  z.printFractionAsFloat();  cout << endl << endl;

    x.printFraction();  cout << " - ";  y.printFraction();
    z = x.subtract(y);
    cout << " = ";  z.printFraction();  cout << endl;
    z.printFraction();
    cout << " = ";  z.printFractionAsFloat();  cout << endl << endl;

    x.printFraction();  cout << " * ";  y.printFraction();
    z = x.multiply(y);
    cout << " = ";  z.printFraction();  cout << endl;
    z.printFraction();
    cout << " = ";  z.printFractionAsFloat();  cout << endl << endl;

    x.printFraction();  cout << " / ";  y.printFraction();
    z = x.divide(y);
    cout << " = ";  z.printFraction();  cout << endl;
    z.printFraction();
    cout << " = ";  z.printFractionAsFloat();  cout << endl;


    return 0;
}