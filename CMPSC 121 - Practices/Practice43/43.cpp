#include <iostream>
using namespace std;


class Demo
{
    public:
        Demo();
};

Demo::Demo()
{
    cout << "Here is the constructor" << endl;
}


int main()
{
    Demo demoObject;

    cout << "This program demonstrates an object with a constructor" << endl;


    return 0;
}