/**
 * hamming.cpp:
 * The program should find out how many differences are in two DNA strands (Hamming Distance).
 *
 * @author Lucas Hebmuller
*/


#include <iostream>
using namespace std;


int main()
{
    const int SIZE = 17;
    int sample1[SIZE] = {'G','A','G','C','C','T','A','C','T','A','A','C','G','G','G','A','T'};
    int sample2[SIZE] = {'C','A','T','C','G','T','A','A','T','G','A','C','G','G','C','C','T'};
    int count;


    for ( int i = 0, j = 0; i < SIZE; i++ )
    {
        if ( sample1[i] != sample2[i] )
            j++;
        count = j;
    }

    cout << "They have " << count << " differences";


    return 0;
}