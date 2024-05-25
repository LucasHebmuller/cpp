#include <iostream>
#include "List.h"
using namespace std;


int main()
{
    cout << "Please enter the elements of the list, seperated by space. Use any nonnumerical word to end input: " << endl;
    List testList(10);
    cin >> testList;

    cout << "The following is the list after reading from cin:" << endl;
    testList.display(cout);
    cout << endl;

    cout << "The capacity of the list is " << testList.getCapacity() << endl;


    return 0;
}


