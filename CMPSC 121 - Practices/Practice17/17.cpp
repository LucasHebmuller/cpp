#include <iostream>

using namespace std;


void sum(int a, int b, int c)
{
    int result;
    result = a + b + c;
    cout << result;
}


int main()
{
    int x, y, z;

    cout << "Enter a value:";
    cin >> x;
    cout << "Enter another value:";
    cin >> y;
    cout << "Enter a value:";
    cin >> z;
    sum(x,y,z);


    return 0;
}
