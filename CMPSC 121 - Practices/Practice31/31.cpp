#include <iostream>

using namespace std;


int main()
{
    const int SIZE = 4;
    int numbers[SIZE] = { 3,8,9,5 };
    int *pointer;

    pointer = numbers;

    for ( int i = 0; i < SIZE; i++)
    {
        cout << *( pointer + i) << endl;
    }

    cout << endl;

    for ( int j = SIZE; j > 0; j--)
    {
        cout << *( pointer + j - 1)  << endl;
    }


    return 0;
}