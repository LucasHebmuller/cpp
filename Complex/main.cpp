#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
    Complex a, b(3, 4), c(6, 5);

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    a.set(10, 7);
    cout << a.getImaginary() << endl;
    cout << a.getReal() << endl;

    return 0;
}
