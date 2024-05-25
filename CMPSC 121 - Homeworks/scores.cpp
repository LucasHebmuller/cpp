/**
 * scores.cpp:
 * The program should prompt the user for five students grades and then display the grades in ascending order and the average grade.
 *
 * @author Lucas Hebmuller
 */


#include <iostream>
#include <iomanip>
using namespace std;


void getScores(double *scores, int size);
void sortScores(double *scores, int size);
double computeAverage(double *scores, int size);


int main()
{
    cout << fixed << setprecision(2);

    const int SIZE = 5;
    double *ptr_scores = new double[ SIZE ];
    double avg;

    getScores( ptr_scores, SIZE );
    sortScores( ptr_scores, SIZE );
    avg = computeAverage ( ptr_scores, SIZE );

    cout << endl;
    cout << "The test scores are in ascending order:" << endl;

    for ( int i = 0; i < SIZE; i++ )
    {
        cout << *( ptr_scores + i ) << endl;
    }

    cout << endl;
    cout << "The average score is " << avg << endl;

    delete [] ptr_scores;


    return 0;
}


void getScores(double *scores, int size)
{
    for ( int i = 0; i < size; i++ )
    {
        do
        {
            cout << "Enter test score " << i + 1 << ":";
            cin >> *( scores + i );

            if ( *( scores + i ) < 0.0 )
                cout << "Not allowed to enter a negative value, try again." << endl;

        } while ( *( scores + i ) < 0.0 );
    }

    return;
}


void sortScores(double *scores, int size)
{
    bool sorted = false;

    while ( !sorted )
    {
        sorted = true;

        for ( int i = 0; i < size - 1; i++ )
        {
            if ( *( scores + i ) > *( scores + i + 1) )
            {
                double temp = *( scores + i );
                *( scores + i ) = *( scores + i + 1 );
                *( scores + i + 1 ) =  temp;
                sorted = false;
            }
        }
    }

    return;
}


double computeAverage(double *scores, int size)
{
    double average;

    for ( int i = 0; i < size; i++ )
    {
        average += *( scores + i );
    }

    average = average / 5.0;

    return average;
}


/*
 * EXECUTION SAMPLE:
 * Enter test score 1:85
 * Enter test score 2:74.6
 * Enter test score 3:-14
 * Not allowed to enter a negative value, try again.
 * Enter test score 3:80
 * Enter test score 4:94
 * Enter test score 5:98.9
 *
 * The test scores are in ascending order:
 * 74.60
 * 80.00
 * 85.00
 * 94.00
 * 98.90
 *
 * The average score is 86.50
 *
 *Process finished with exit code 0
 *
 */