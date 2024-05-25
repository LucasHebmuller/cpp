/**
 * expander.cpp:
 * The program should prompt the user for an array and then display the original array as well as a new one double the size of the original.
 *
 * @author Lucas Hebmuller
 */


#include <iostream>
using namespace std;


int* expandArray(int *org_array, int array_size);


int main()
{
    int size;


    do {
        cout << "Please enter the size of the array:";
        cin >> size;

        if (size <= 0) {
            cout << "The number must be greater than 1, try again." << endl;
        }
    } while (size <= 0);


    int *org_array = new int[ size ];
    cout << endl;


    for (int i = 0; i < size; i++) {
        cout << "Enter integer number " << i + 1 << ":";
        cin >> *(org_array + i);
    }
    cout << endl;


    cout << "The contents of the original array are:";
    for (int i = 0; i < size; i++) {
        cout << " " << *(org_array + i);
    }
    cout << endl;

    size = size * 2;
    int* expanded = nullptr;
    expanded = expandArray(org_array, size);


    cout << "The contents of the expanded array are:";
    for (int i = 0; i < size; i++) {
        cout << " " << *(expanded + i);
    }
    cout << endl;


    delete [] org_array;
    delete [] expanded;
    expanded = nullptr;


    return 0;
}


int* expandArray(int *org_array, int array_size)
{
    int* newArray = nullptr;
    newArray = new int[ array_size ];

    for ( int i = 0; i < array_size; i++ )
    {
        if ( i < array_size/2 )
        {
            newArray[i] = org_array[i];
        }
        else
        {
            newArray[i] = 0;
        }
    }


    return newArray;
}


/*
 * EXECUTION SAMPLE:
 * Please enter the size of the array:-1
 * The number must be greater than 1, try again.
 * Please enter the size of the array:4
 *
 * Enter integer number 1:2
 * Enter integer number 2:2
 * Enter integer number 3:1
 * Enter integer number 4:3
 *
 * The contents of the original array are: 2 2 1 3
 * The contents of the expanded array are: 2 2 1 3 0 0 0 0
 *
 * Process finished with exit code 0
 *
 */