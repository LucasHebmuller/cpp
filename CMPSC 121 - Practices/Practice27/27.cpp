#include <iostream>

using namespace std;


void doubleNum(int &);


int main()
{
    int value;

    cout << "Type a number to be the value passed by reference:";
    cin >> value;

    cout << "In main, value is equal to: " << value << endl;
    doubleNum(value);
    cout << "Now back in main, value is equal to: " << value << endl;


    return 0;
}


void doubleNum(int &refVal)
{
    refVal = refVal*2;
    cout << "In the doubleNum function, value is equal to: " << refVal << endl;
}