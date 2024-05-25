/**
 * reverse.cpp:
 * The program should ask the user for an array and then display the original array as well as one with the elements in a reversed order.
 *
 * @author Lucas Hebmuller.
 */


#include <iostream>
using namespace std;


int* reverseArray(int *num_array, int array_size);


int main()
{
   int size;

    do {
        cout << "Please enter the size of the array:";
        cin >> size;

        if ( size <= 0)
        {
            cout << "The array size must be greater than 0, try again." << endl;
        }
    } while ( size <= 0 );

    int *num_array = new int[ size ];
    cout << endl;


    for (int i = 0; i < size; i++)
    {
        cout << "Please enter number " << i + 1 << ":";
        cin >> *(num_array + i);
    }
    cout << "The contents of the original array are:";
    for (int i = 0; i < size; i++)
    {
        cout << " " << *( num_array + i);
    }
    cout << endl;


    int* reversed = nullptr;
    reversed = reverseArray( num_array, size );

    cout << "The contents of the reversed array are:";
    for (int i = 0; i < size; i++)
    {
        cout << " " << *( reversed + i + 1 );
    }
    cout << endl;


    delete [] num_array;
    delete [] reversed;
    reversed = nullptr;


    return 0;
}


int* reverseArray(int *num_array, int array_size)
{
    int* newArray = nullptr;
    newArray = new int[ array_size ];

    for ( int i = 0; i < array_size + 1; i++ )
    {
        newArray[i] = num_array[ array_size - i ];
    }


    return newArray;
}


/*
 * EXECUTION SAMPLE:
 * Please enter the size of the array:0
 * The array size must be greater than 0, try again.
 * Please enter the size of the array:4
 *
 * Please enter number 1:8
 * Please enter number 2:2
 * Please enter number 3:1
 * Please enter number 4:5
 * The contents of the original array are: 8 2 1 5
 * The contents of the reversed array are: 5 1 2 8
 *
 * Process finished with exit code 0
 *
 */
