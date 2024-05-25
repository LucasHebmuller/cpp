#include <iostream>
using namespace std;


int *getFirstTen();


int main()
{
    int *p = getFirstTen();
    cout << p[5];

    delete [] p;


    return 0;
}


int *getFirstTen()
{
    int *A;
    A = new int[10];

    for ( int i = 0; i < 10; i++ )
        A[i] = i + 1;


    return A;
}