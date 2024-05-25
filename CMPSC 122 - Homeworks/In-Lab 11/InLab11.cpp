#include <iostream>
#include <stack>
using namespace std;


int maxCoins(int * board, int start)
{
    if ( start < 0 )
        return 0;
    if ( start == 0 || start == 1 )
        return board[start];

    return board[start] + max( maxCoins(board, start -2), maxCoins( board, start -3) );
}


/******************************************************************************
* Test driver main function.
* DO NOT modify the main function.
******************************************************************************/


void TestCase(int * board, int start, int size)
{
    cout << "Test Case: Board Configuration: ";
    for(int i=0; i<size; i++){
        cout << board[i] << " ";
    }
    cout << endl;
    cout << "Starting index is " << start << endl;
    int testresult = maxCoins(board, start);
    cout << "For this test case, the max number of coins we can collect is " << testresult << endl << endl;
}


int main()
{
    int board1[] = {1,1,15,6,1,0,0};
    TestCase(board1, 6, 7); // Max 17 coins collected

    int board2[] = {20,6,1,1,8,4,0,0};
    TestCase(board2, 7, 8); // Max 29 coins collected

    int board3[] = {0,0,0};
    TestCase(board3, 2, 3); // 0 coins collected
}
