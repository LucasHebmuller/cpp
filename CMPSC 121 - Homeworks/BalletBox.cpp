/**
 * BalletBox.cpp:
 * The program should ask the user for their vote and the display the winner of the election.
 *
 * @author Lucas Hebmuller
 */


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


void getVote(int voteCount[]);
void result(int voteCount[], string candidates[], int size, int space);


int main()
{
    const int ARRAY_SIZE = 4, SPACE = 10;
    int voteCount[ARRAY_SIZE];
    string candidates[ARRAY_SIZE] = { "Tim", "Satya", "Sundar", "Elon"};

    getVote( voteCount );
    result( voteCount, candidates, ARRAY_SIZE, SPACE );


    return 0;
}


void getVote(int voteCount[])
{
    string vote;
    int counterTim = 0, counterSatya = 0, counterSundar = 0, counterElon = 0;

    do
    {
        cout << "Who do you want to vote for (Tim, Satya, Sundar, or Elon)?";
        cin >> vote;


        if ( vote == "Tim" )
        {
            counterTim++;
            cout << "One vote has been added to Tim's count." << endl;
        }

        else if ( vote == "Satya" )
        {
            counterSatya++;
            cout << "One vote has been added to Satya's count." << endl;
        }

        else if ( vote == "Sundar" )
        {
            counterSundar++;
            cout << "One vote has been added to Sundar's count." << endl;
        }

        else if( vote == "Elon")
        {
            counterElon++;
            cout << "One vote has been added to Elon's count." << endl;
        }

        else if ( vote != "quit")
        {
            cout << "That is an invalid choice" << endl;
        }

    } while(vote != "quit");

    voteCount[0] = counterTim;
    voteCount[1] = counterSatya;
    voteCount[2] = counterSundar;
    voteCount[3] = counterElon;

}


void result( int voteCount[], string candidates[], int size, int space )
{
    int highest;
    highest = voteCount[0];

    for ( int j = 0; j < size; j++ )
    {
        if ( voteCount[j] > highest )
            highest = voteCount[j];
    }


    for ( int i = 0; i < size; i++ )
    {
        if ( voteCount[i] == highest )
        {
            cout << left << setw(space) << candidates[i] << voteCount[i] << "  **Winner**" << endl;
        }
        else
        {
            cout << left << setw(space) << candidates[i] << voteCount[i] << endl;
        }
    }
}


/*
 * EXECUTION SAMPLE:
 * Who do you want to vote for (Tim, Satya, Sundar, or Elon)?Satya
 * One vote has been added to Satya's count.
 * Who do you want to vote for (Tim, Satya, Sundar, or Elon)?Elon
 * One vote has been added to Elon's count.
 * Who do you want to vote for (Tim, Satya, Sundar, or Elon)?Satya
 * One vote has been added to Satya's count.
 * Who do you want to vote for (Tim, Satya, Sundar, or Elon)?Lucas
 * That is an invalid choice
 * Who do you want to vote for (Tim, Satya, Sundar, or Elon)?Tim
 * One vote has been added to Tim's count.
 * Who do you want to vote for (Tim, Satya, Sundar, or Elon)?Elon
 * One vote has been added to Elon's count.
 * Who do you want to vote for (Tim, Satya, Sundar, or Elon)?Elon
 * One vote has been added to Elon's count.
 * Who do you want to vote for (Tim, Satya, Sundar, or Elon)?quit
 * Tim       1
 * Satya     2
 * Sundar    0
 * Elon      3  **Winner**
 */