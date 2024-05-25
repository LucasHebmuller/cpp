#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/* #defines for program uses, old school style
#define NEW_GAME        'N'
#define GUESS_NUMBER    'G'
#define GUESS_CORRECT   'C'
#define GUESS_TOO_LOW   'L'
#define GUESS_TOO_HIGH  'H'
#define GUESS_INVALID   'I'
#define REQ_INVALID     'R'

#define FROM_NUMBER     100
#define TO_NUMBER       200
*/

// const for program uses, current practice
const char NEW_GAME = 'N';
const char GUESS_NUMBER = 'G';
const char GUESS_CORRECT = 'C';
const char GUESS_TOO_LOW = 'L';
const char GUESS_TOO_HIGH = 'H';
const char GUESS_INVALID = 'I';
const char REQ_INVALID = 'R';

const int FROM_NUMBER = 100;
const int TO_NUMBER = 200;


char checkWithHost(char ID, int guessingNo, string& msg);
void personPlayer();
void computerPlayer();

int main()
{
    string msg;
    char answer = '\0';

    while (answer != 'p' && answer != 'c')
    {
        cout << "Would you like to (p)lay or watch the (c)omputer play?" << endl;
        cin >> answer;
    }

    do
    {
        msg = "";
        if (checkWithHost(NEW_GAME, 0, msg) == NEW_GAME)        // start new game
        {
            cout << msg << endl;
            if (answer == 'p')
                personPlayer();
            else
                computerPlayer();
        }
        else
        {
            cout << "ERROR: For some reason, unable to start a new game!" << endl;
        }
        answer = '\0';      // reset input
        while (answer != 'p' && answer != 'c' && answer != 'q')
        {
            cout << "Would you like to (p)lay or watch the (c)omputer play or (q)uit?" << endl;
            cin >> answer;
        }
    } while (answer != 'q');
}


void computerPlayer()
{
    int guessNo;
    int low = FROM_NUMBER, high = TO_NUMBER;
    char reply = GUESS_INVALID;
    string msg;
    do
    {
        guessNo = (high + low) / 2;
        cout << "The computer's guess is " << guessNo << endl;
        reply = checkWithHost(GUESS_NUMBER, guessNo, msg);
        if (reply == GUESS_TOO_HIGH)
            high = guessNo - 1;
        else if (reply == GUESS_TOO_LOW)
            low = guessNo + 1;

        cout << msg << endl;
    } while (reply != GUESS_CORRECT);
    return;
}

void personPlayer()
{
    char reply = GUESS_INVALID;
    int guessNo;
    string msg;
    do
    {
        cout << "Enter your guess in between " << FROM_NUMBER << " and " << TO_NUMBER << '.' << endl;
        cin >> guessNo;
        reply = checkWithHost(GUESS_NUMBER, guessNo, msg);
        cout << msg << endl;
    } while (reply != GUESS_CORRECT);
    return;
}


// check the quessingNo with the game host who holds the secreate number for the guessing game
// The host will reply too high, too low or correct answer compare to the secreate number
char checkWithHost(char ID, int guessingNo, string& msg)
{
    static int secreatNumber;
    char result;

    switch (ID)
    {
        // startNewGame generates a random number between FROM_NUMBER to TO_NUMBER for the guessing game
    case NEW_GAME:
        // set different seeds to make sure each run of this program will 
        // generate different random numbers
        srand(unsigned(time(nullptr)));

        // rand() returns random number between 0 and RAND_MAX.
        // RAND_MAX is a constant defined in <cstdlib>.
        // generate a random integer between FROM_NUMBER and TO_NUMBER
        secreatNumber = FROM_NUMBER + (rand() % (TO_NUMBER - FROM_NUMBER + 1));
        // cout << "Secreat Number = " << secreatNumber << endl;  // for debug purpose
        msg = "Start New Game.";
        result = NEW_GAME;
        break;

    case GUESS_NUMBER:
        // checking number range is optional, but can be implemented very easily here.
        // However, here does not check others like non-numeric characters which
        // will get the program plunges into infinite loop.
        if (guessingNo < FROM_NUMBER || guessingNo > TO_NUMBER)
        {
            msg = "You have entered an invalid number -> " + guessingNo;
            result = GUESS_INVALID;
        }
        else if (guessingNo > secreatNumber)
        {
            msg = "Sorry, your guess is too high, try again.";
            result = GUESS_TOO_HIGH;
        }
        else if (guessingNo < secreatNumber)
        {
            msg = "Sorry, your guess is too low, try again.";
            result = GUESS_TOO_LOW;
        }
        else
        {
            string str_sn = to_string(secreatNumber);  // need <string>
            msg = "Congrats, you guessed the correct number " + str_sn;
            result = GUESS_CORRECT;
        }
        break;

    default:    // Invalid request
        result = REQ_INVALID;
        msg = "Invalid request operation.";

    }
    return result;
}


/*
                                    +-----------------+
                                    |                 |
                                +-->| Computer Player |<---+
                                |   |                 |    |
        +-------------------+   |   +-----------------+    |
        |                   |---+                          |     +-----------------+
        |  Main controller  |                              +---->|                 |
        |  (or the main())  |<---------------------------------->|      Host       |
        |                   |---+                          +---->|                 |
        +-------------------+   |                          |     +-----------------+
                                |   +-----------------+    |
                                |   |                 |    |
                                +-->|  Human Player   |<---+
                                    |                 |
                                    +-----------------+

*/
