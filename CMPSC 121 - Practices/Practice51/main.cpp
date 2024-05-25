#include <iostream>
using namespace std;


int main()
{
    int size;

    cout << "Enter the size of the array:";
    cin >> size;
    cout << endl;

    int* myArray = new int[size];

    for ( int i = 0; i < size; i++ )
    {
        cout << "Enter the " << i+1 << " element of the array:";
        cin >> myArray[i];
    }
    cout << endl;

    cout << "The elements of the array are:";
    for ( int i = 0; i < size; i++ )
    {
        cout << " " << myArray[i];
    }
    cout << endl;

    delete[]myArray;
    myArray = nullptr;


    return 0;
}