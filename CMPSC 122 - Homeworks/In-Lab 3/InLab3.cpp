#include <iostream>
using namespace std;


int* append (int*, int, int*, int);
int* merge (int*, int, int*, int);
void print (int*, int, const char *);


int main()
{
    int arrayA[] = {11,33,55,77,99};
    int arrayB[] = {22,44,66,88};

    print(arrayA, 5, "Sorted array A: ");
    print(arrayB, 4, "Sorted array B: ");


    int* arrayC = append(arrayA,5,arrayB,4);
    print(arrayC, 9, "Append B to A:  ");

    int* arrayD = merge(arrayA,5,arrayB,4);
    print(arrayD, 9, "Merge A to B:   ");


    delete [] arrayC;
    delete [] arrayD;


    return 0;
}


int* append(int* arrayA, int sizeA, int* arrayB, int sizeB)
{
    int* arrayC = new int[sizeA + sizeB];

    for ( int i = 0; i < sizeA; i++ )
        arrayC[i] = arrayA[i];

    int j = 0;
    for ( int i = sizeA; i < ( sizeA + sizeB ); i++ )
    {
        arrayC[i] = arrayB[j];
        j++;
    }

    return arrayC;
}


int* merge(int* arrayA, int sizeA, int* arrayB, int sizeB)
{
    int* arrayD = new int[sizeA + sizeB];

    int a, b;
    a = b = 0;

    for ( int i = 0; i < ( sizeA + sizeB ); i++ )
    {

        if ( a == ( sizeA - 1) && b != ( sizeB - 1) )
        {
            arrayD[i] = arrayA[a];
        }
        else if ( arrayA[a] < arrayB[b] )
        {
            arrayD[i] = arrayA[a];
            a++;
        }
        else
        {
            arrayD[i] = arrayB[b];
            b++;
        }
    }

    return arrayD;
}


void print(int* array, int size, const char * lable)
{
    cout << lable << " " ;
    for ( int i = 0; i < size; i ++ )
    {
        cout << array[i] << "  ";
    }

    cout << endl;
}


/*
 * EXECUTION SAMPLE:
 * Sorted array A:  11  33  55  77  99
 * Sorted array B:  22  44  66  88
 * Append B to A:   11  33  55  77  99  22  44  66  88
 * Merge A to B:    11  22  33  44  55  66  77  88  99
 *
 * Process finished with exit code 0
 */

