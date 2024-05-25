#include <iostream>
using namespace std;


void ReverseArray(int [], int );

int main() {
    const int SIZE = 5;
    int array[SIZE] = {1,2,3,4,5};

    ReverseArray(array,SIZE);

    return 0;
}


void ReverseArray(int arr[], int arraySize)
{
    int size = arraySize;
    for ( int i = 0; i < arraySize; i++ )
        arr[i] = arr[size - i - 1];

    for ( int i = 0; i < arraySize; i++ )
        cout << arr[i] << " " << endl;
}