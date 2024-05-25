#include <iostream>
#include <vector>
using namespace std;


void getAnswers( char ans[], int size );
void showScore( char ans[], char correct[], int size);


int main()
{
    const int SIZE = 10;
    char correctAnswers[SIZE] = {'A', 'D','B','B','C','B','A','B','C','D'};
    char answers[SIZE];

    getAnswers(answers, SIZE);
    showScore( answers, correctAnswers, SIZE );


    return 0;
}


void getAnswers( char ans[], int size )
{

    for ( int i = 0; i < size; i++ )
    {
        do{
            cout << "Enter answer for question " << i+1 << ":";
            cin >> ans[i];

            if ( ans[i] != 'A' && ans[i] != 'B' && ans[i] != 'C' && ans[i] != 'D' )
            {
                cout << "Invalid option. Your answer must be a letter between 'A' and 'D'." << endl;
            }

        } while ( ans[i] != 'A' && ans[i] != 'B' && ans[i] != 'C' && ans[i] != 'D' );
    }
    cout << endl;
}


void showScore( char ans[], char correct[], int size )
{
    vector <int> mistakes;
    int right, wrong;
    right = wrong = 0;

    for ( int i = 0; i < size; i++ )
    {
        if ( ans[i] == correct[i] )
        {
            right++;
        }
        else
        {
            wrong++;
            mistakes.push_back(i+1);
        }
    }

    int len = mistakes.size();


    if ( right >= 7 )
        cout << "Congratulations! You have passed the exam!" << endl;
    else
        cout << "You didn't pass the exam." << endl;

    cout << "You answered " << right << " questions right and " << wrong << " questions wrong." << endl;
    cout << "The ones you got wrong were questions: ";
    for ( int i = 0; i < len ; i++ )
    {
        cout << mistakes[i] << " ";
    }
}