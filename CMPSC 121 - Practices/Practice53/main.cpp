#include <iostream>
using namespace std;


int main()
{
    int a = 20, b = 10;
    cout << a << " " << b << endl << endl;

    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl << endl;


    int c = 30, d = 40;
    cout << c << " " << d << endl << endl;

    c = c + d;
    d = c - d;
    c = c - d;
    cout << c << " " << d << endl << endl;

    return 0;
}
