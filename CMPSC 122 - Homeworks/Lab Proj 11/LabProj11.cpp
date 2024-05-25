#include <iostream>
#include "timer.h"
using namespace std;


int pathsCount( int, int );


int main()
{
    int north, east;
    char answer;
    Timer t;

    do
    {
        cout << " How many points north of A is B?";
        cin >> north;
        cout << " How many points east of A is B?";
        cin >> east;

        t.start();
        cout << " There are " << pathsCount( north, east ) << " northeast paths between A and B." << endl;
        t.stop();
        t.show();

        cout << " Enter y or Y to continue the next example or any other letter to exit:";
        cin >> answer;

    } while ( answer == 'Y' || answer == 'y' );


    return 0;
}


int pathsCount( int up, int right )
{
    if ( up < 0 || right < 0 )
        return 0;
    if ( up == 0 || right == 0 )
        return 1;

    return pathsCount( up -1, right ) + pathsCount( up, right -1 );
}


/*
 EXECUTION SAMPLE:
 How many points north of A is B?5
 How many points east of A is B?7
 There are 792 northeast paths between A and B.
 Process Timer
 -------------------------------
 Elapsed Time: 0.009s
 Enter y or Y to continue the next example or any other letter to exit:Y
 How many points north of A is B?20
 How many points east of A is B?6
 There are 230230 northeast paths between A and B.
 Process Timer
 -------------------------------
 Elapsed Time: 0.01s
 Enter y or Y to continue the next example or any other letter to exit:y
 How many points north of A is B?13
 How many points east of A is B?11
 There are 2496144 northeast paths between A and B.
 Process Timer
 -------------------------------
 Elapsed Time: 0.012s
 Enter y or Y to continue the next example or any other letter to exit:q
 */