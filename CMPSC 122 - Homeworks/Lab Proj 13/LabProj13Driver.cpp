/**
 * LabProj13Driver.cpp
 *
 * @author Lucas Hebmuller
 */
/******************************************************************************
CMPSC122 LabProj13: Project Algorithm Analysis -- sample driver
******************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include "timer.h"
#include "MaxSubList.h"

const int FROM_SIZE = 500;
const int MUL = 2;

using namespace std;

void Ouput_CSV_File(string filename, Timer* T, int loop);

int main()
{
    int* Result, * Vec;
    Timer* T, Prepare;
    int loop;

    cout << "Please enter the number of loops: ";
    cin >> loop;

    Prepare.start();
    int Size = FROM_SIZE; // the integers sequence array size

    T = new Timer[loop];
    Result = new int[loop];
    cout << setprecision(4) << fixed << endl;
    // change heading for each algorithm
    cout << string(28, '=') << " Algorithm Blue " << string(28, '=') << endl << endl;
    for (int i = 0; i < loop; i++)
    {
        Vec = new int[Size];
        srand((unsigned)time(NULL));

        for (int j = 0; j < Size; j++)
            Vec[j] = rand() % 101 - 50;

        Result[i] = 0;
        Prepare.stop();
        cout << "Preparation Time: " << Prepare.get_elapsedtime() << "s" << endl;

        T[i].start();
        // Comment and uncomment for each test case
        Result[i] = MaxSublistSum_Blue(Vec, Size);
        //Result[i] = MaxSublistSum_Green(Vec, Size);
        //Result[i] = MaxSublistSum_Red(Vec, Size);
        T[i].stop();

        cout << '[' << setw(2) << i << ']' << setw(50) << "Maximum contiguous subsequence sum (array size = " << setw(9) << Size << "): " << setw(6) << Result[i] << endl;
        cout << "Elapsed Time: " << T[i].get_elapsedtime() << 's' << endl;
        cout << string(72, '-') << endl;

        Size = MUL * Size;
        delete[] Vec;
    }
    cout << endl << endl;

    Ouput_CSV_File("Result(Blue).csv", T, loop); // change the filename for each algorithm
}


void Ouput_CSV_File(string filename, Timer* T, int loop)
{
    ofstream csvOutFile(filename);

    if (!csvOutFile)
    {
        cerr << "Failed to open output file: " << filename << endl;
        exit(EXIT_FAILURE);
    }
    int Size = FROM_SIZE;
    csvOutFile << "\"Array Size\",\"Run Time (s)\"" << endl;
    for (int i = 0; i < loop; i++)
    {
        csvOutFile << Size << "," << T[i].get_elapsedtime() << endl;
        Size = MUL * Size;
    }
    csvOutFile.close();
}


/*
EXECUTIONS SAMPLE:

Please enter the number of loops:10

============================ Algorithm Blue ============================

Preparation Time: 0.0010s
[ 0] Maximum contiguous subsequence sum (array size =       500):    796
Elapsed Time: 0.0010s
------------------------------------------------------------------------
Preparation Time: 0.0100s
[ 1] Maximum contiguous subsequence sum (array size =      1000):   1446
Elapsed Time: 0.0010s
------------------------------------------------------------------------
Preparation Time: 0.0100s
[ 2] Maximum contiguous subsequence sum (array size =      2000):   1465
Elapsed Time: 0.0100s
------------------------------------------------------------------------
Preparation Time: 0.0200s
[ 3] Maximum contiguous subsequence sum (array size =      4000):   1883
Elapsed Time: 0.0150s
------------------------------------------------------------------------
Preparation Time: 0.0350s
[ 4] Maximum contiguous subsequence sum (array size =      8000):   3743
Elapsed Time: 0.0550s
------------------------------------------------------------------------
Preparation Time: 0.0900s
[ 5] Maximum contiguous subsequence sum (array size =     16000):   5035
Elapsed Time: 0.2200s
------------------------------------------------------------------------
Preparation Time: 0.3100s
[ 6] Maximum contiguous subsequence sum (array size =     32000):   6239
Elapsed Time: 0.8910s
------------------------------------------------------------------------
Preparation Time: 1.2030s
[ 7] Maximum contiguous subsequence sum (array size =     64000):   4595
Elapsed Time: 3.6570s
------------------------------------------------------------------------
Preparation Time: 4.8630s
[ 8] Maximum contiguous subsequence sum (array size =    128000):   9166
Elapsed Time: 16.7030s
------------------------------------------------------------------------
Preparation Time: 21.5750s
[ 9] Maximum contiguous subsequence sum (array size =    256000):   7716
Elapsed Time: 60.3650s
------------------------------------------------------------------------


Please enter the number of loops:13

============================ Algorithm Green ============================

Preparation Time: 0.0010s
[ 0] Maximum contiguous subsequence sum (array size =       500):    602
Elapsed Time: 0.0010s
------------------------------------------------------------------------
Preparation Time: 0.0100s
[ 1] Maximum contiguous subsequence sum (array size =      1000):    786
Elapsed Time: 0.0010s
------------------------------------------------------------------------
Preparation Time: 0.0100s
[ 2] Maximum contiguous subsequence sum (array size =      2000):    786
Elapsed Time: 0.0010s
------------------------------------------------------------------------
Preparation Time: 0.0100s
[ 3] Maximum contiguous subsequence sum (array size =      4000):   1466
Elapsed Time: 0.0010s
------------------------------------------------------------------------
Preparation Time: 0.0100s
[ 4] Maximum contiguous subsequence sum (array size =      8000):   2767
Elapsed Time: 0.0010s
------------------------------------------------------------------------
Preparation Time: 0.0100s
[ 5] Maximum contiguous subsequence sum (array size =     16000):   2767
Elapsed Time: 0.0010s
------------------------------------------------------------------------
Preparation Time: 0.0180s
[ 6] Maximum contiguous subsequence sum (array size =     32000):   8334
Elapsed Time: 0.0010s
------------------------------------------------------------------------
Preparation Time: 0.0200s
[ 7] Maximum contiguous subsequence sum (array size =     64000):   8334
Elapsed Time: 0.0010s
------------------------------------------------------------------------
Preparation Time: 0.0300s
[ 8] Maximum contiguous subsequence sum (array size =    128000):  15943
Elapsed Time: 0.0100s
------------------------------------------------------------------------
Preparation Time: 0.0400s
[ 9] Maximum contiguous subsequence sum (array size =    256000):  16914
Elapsed Time: 0.0200s
------------------------------------------------------------------------
Preparation Time: 0.0710s
[10] Maximum contiguous subsequence sum (array size =    512000):  16914
Elapsed Time: 0.0290s
------------------------------------------------------------------------
Preparation Time: 0.1100s
[11] Maximum contiguous subsequence sum (array size =   1024000):  16914
Elapsed Time: 0.0700s
------------------------------------------------------------------------
Preparation Time: 0.2000s
[12] Maximum contiguous subsequence sum (array size =   2048000):  21731
Elapsed Time: 0.1310s
------------------------------------------------------------------------


Please enter the number of loops:13

============================ Algorithm Red ============================

Preparation Time: 0.0020s
[ 0] Maximum contiguous subsequence sum (array size =       500):    299
Elapsed Time: 0.0010s
------------------------------------------------------------------------
Preparation Time: 0.0040s
[ 1] Maximum contiguous subsequence sum (array size =      1000):   1130
Elapsed Time: 0.0010s
------------------------------------------------------------------------
Preparation Time: 0.0050s
[ 2] Maximum contiguous subsequence sum (array size =      2000):   2523
Elapsed Time: 0.0010s
------------------------------------------------------------------------
Preparation Time: 0.0060s
[ 3] Maximum contiguous subsequence sum (array size =      4000):   2523
Elapsed Time: 0.0010s
------------------------------------------------------------------------
Preparation Time: 0.0080s
[ 4] Maximum contiguous subsequence sum (array size =      8000):   2523
Elapsed Time: 0.0010s
------------------------------------------------------------------------
Preparation Time: 0.0090s
[ 5] Maximum contiguous subsequence sum (array size =     16000):   4369
Elapsed Time: 0.0010s
------------------------------------------------------------------------
Preparation Time: 0.0110s
[ 6] Maximum contiguous subsequence sum (array size =     32000):   4369
Elapsed Time: 0.0010s
------------------------------------------------------------------------
Preparation Time: 0.0140s
[ 7] Maximum contiguous subsequence sum (array size =     64000):   8974
Elapsed Time: 0.0010s
------------------------------------------------------------------------
Preparation Time: 0.0170s
[ 8] Maximum contiguous subsequence sum (array size =    128000):   8974
Elapsed Time: 0.0010s
------------------------------------------------------------------------
Preparation Time: 0.0220s
[ 9] Maximum contiguous subsequence sum (array size =    256000):  10608
Elapsed Time: 0.0010s
------------------------------------------------------------------------
Preparation Time: 0.0280s
[10] Maximum contiguous subsequence sum (array size =    512000):  15855
Elapsed Time: 0.0010s
------------------------------------------------------------------------
Preparation Time: 0.0400s
[11] Maximum contiguous subsequence sum (array size =   1024000):  30738
Elapsed Time: 0.0030s
------------------------------------------------------------------------
Preparation Time: 0.0620s
[12] Maximum contiguous subsequence sum (array size =   2048000):  35572
Elapsed Time: 0.0050s
------------------------------------------------------------------------


 */