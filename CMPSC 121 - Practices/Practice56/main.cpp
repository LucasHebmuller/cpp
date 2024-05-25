#include <iostream>
#include <ctime>
#include <random>
using namespace std;


int getSum( int, int );
bool checkAnswer( int, int, int );


int main()
{
    srand( ( unsigned )  time (nullptr) );

    int n1, n2, sum;

    n1 = rand() % ( 100 - 1 + 1) + 1;
    n2 = rand() % 101;

    sum = getSum( n1, n2 );

    if ( checkAnswer( n1, n2, sum ) )
    {
        cout << "Congrats! You got the sum right!" << endl;
    }
    else
    {
        cout << "That is not the right answer... the right answer is " << sum << endl;
    }


    return 0;
}


int getSum( int v1, int v2 )
{
    return v1 + v2;
}


bool checkAnswer( int v1, int v2, int sum )
{
    int answer;

    cout << "What is the sum between " << v1 << " and " << v2 << " ?" << endl;
    cin >> answer;

    if ( answer != sum )
        return false;
    else
        return true;
}


