/**
 * RPS.cpp:
 * The program should simulate a game of Rock, Paper, Scissors between the user and the computer by asking for the user's choice and generating a random choice for the computer and ,after that, determine the winner
 *
 * @author Lucas Hebmuller
 */


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int getUserSelection();
int getComputerSelection();
bool determineWinner( int userChoice, int computerChoice);

const int ROCK     = 1;
const int PAPER    = 2;
const int SCISSORS = 3;
const int QUIT     = -1;


int main()
{
    int userChoice = 0, computerChoice = 0;
    bool continuePlay = false;

    do
    {
      userChoice = getUserSelection();
      computerChoice = getComputerSelection();
      continuePlay = determineWinner( userChoice, computerChoice);
      cout << endl;
    } while( continuePlay );


    return 0;
}


int getUserSelection()
{
    int value;

    do
    {
    cout << "Make your choice (1: Rock, 2: Paper, 3: Scissors, -1: Quit):";
    cin >> value;
    if ( value != ROCK && value != PAPER && value != SCISSORS && value != QUIT )
        cout << "Invalid selection!" << endl;
    } while ( value != ROCK && value != PAPER && value != SCISSORS && value != QUIT );

    return value;
}


int getComputerSelection()
{
    srand ( time ( NULL ) );
    return 1 + rand() % 3;
}


bool determineWinner( int userChoice, int computerChoice)
{
    static int userScore = 0, computerScore = 0;
    bool userWin = false, computerWin = false;

    if ( userChoice == QUIT )
    {
        cout << "GAME OVER " << endl;

        if ( userScore > computerScore )
        {
            cout << "The user wins with a score of " << userScore << " to " << computerScore << endl;
        }
        else if ( computerScore > userScore )
        {
            cout << "The computer wins with a score of " << computerScore << " to " << userScore << endl;
        }
        else
        {
            cout << "Tie!" << endl;
        }
        return false;
    }
    else if ( userChoice == computerChoice )
    {
        cout << "Tie, no winner." << endl;
    }
    else if ( userChoice == ROCK && computerChoice == SCISSORS )
    {
        ++userScore;
        cout << "User wins" << endl;
    }
    else if ( userChoice == PAPER && computerChoice == ROCK )
    {
        ++userScore;
        cout << "User wins" << endl;
    }
    else if ( userChoice == SCISSORS && computerChoice == PAPER)
    {
        ++userScore;
        cout << "User wins" << endl;
    }
    else
    {
        ++computerScore;
        cout << "Computer wins" << endl;
    }
    return true;
}


/*
 * SAMPLE EXECUTION:
 *
 * Make your choice (1: Rock, 2: Paper, 3: Scissors, -1: Quit):2
 * Tie, no winner.
 *
 * Make your choice (1: Rock, 2: Paper, 3: Scissors, -1: Quit):7
 * Invalid selection!
 * Make your choice (1: Rock, 2: Paper, 3: Scissors, -1: Quit):3
 * Computer wins
 *
 * Make your choice (1: Rock, 2: Paper, 3: Scissors, -1: Quit):-4
 * Invalid selection!
 * Make your choice (1: Rock, 2: Paper, 3: Scissors, -1: Quit):2
 * Computer wins
 *
 * Make your choice (1: Rock, 2: Paper, 3: Scissors, -1: Quit):-1
 * GAME OVER
 * The computer wins with a score of 2 to 0
 *
 */