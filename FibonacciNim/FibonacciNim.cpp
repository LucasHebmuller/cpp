#include <iostream>
#include <cstdlib> // for random
#include <ctime>   // for random
#include <iomanip> 
#include <chrono>  // for std::chrono::seconds
#include <thread>  // for std::this_thread::sleep_for
#include "FibonacciNim.h"


void clearScreen()
{
    std::system("cls");
}


void line()
{
    std::cout << std::endl << std::setw(75) << std::setfill('=') << " " << std::endl << std::endl;
}


void loading(int time)
{
    std::cout << std::endl << "Loading..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(time));
}


void introduction()
{
    line();
    std::cout << "FIBONACCI NIM GAME" << std::endl << std::endl;
    std::cout << "In this game, players alternate removing coins from a pile, on" << std::endl;
    std::cout << "each move taking at most twice as many coins as the previous move," << std::endl;
    std::cout << "and winning by taking the last coin." << std::endl;
    line();
}


void startOfGame()
{
    int pile, previousMove;
    char answer;
    bool winner = true, first = true;


    line();
    std::cout << "START OF GAME" << std::endl;
    line();


    std::cout << "Lets start the game by choosing the number of coins in the pile." << std::endl;
    std::cout << "What is the number of coins in the pile? ";
    std::cin >> pile;


    std::cout << std::endl << "Now lets decide which player is going first." << std::endl;
    do
    {
        std::cout << "Who is going first, you or the computer?" << std::endl;
        std::cout << "Please answer 'u' for you and 'c' for the computer:";
        std::cin >> answer;

        if (answer != 'u' && answer != 'c')
            std::cout << "Invalid input. Please try again." << std::endl << std::endl;

    } while (answer != 'u' && answer != 'c');


    loading(3);
    clearScreen();


    if (answer == 'u')
        userTurn(first, pile, winner, previousMove);
    else
        computerTurn(first, pile, winner, previousMove);
}


void firstRoundExplanation()
{
    std::cout << "Since now it is the first round of the game, you are allowed" << std::endl;
    std::cout << "to take as many coins from the pile as you want, but not the" << std::endl;
    std::cout << "exact number of coins in the pile. Remeber that your opponent" << std::endl;
    std::cout << "can take at most twice as many coins as your previous move." << std::endl;
    line();
}


int maximum(int pile, int previousMove)
{
    int accepted;


    previousMove *= 2;


    if (previousMove > pile)
        accepted = pile;
    else
        accepted = previousMove;


    return accepted;
}


void userTurn(bool& first, int& pile, bool& winner, int& previousMove)
{
    int selection;


    std::cout << "It is your turn." << std::endl;
    line();


    if (first)
    {
        firstRoundExplanation();


        do
        {
            std::cout << "How many coins you want to remove from the pile of " << pile << " coins? (1 - " << pile - 1 << "): ";
            std::cin >> selection;

            if (selection < 1 || selection > pile - 1)
                std::cout << "Invalid input. Please try again." << std::endl;
        } while (selection < 1 || selection > pile - 1);

        
        previousMove = selection;
        first = false;
    }
    else
    {
        int allowed = maximum(pile, previousMove);


        do
        {
            std::cout << "How many coins you want to remove from the pile of " << pile << " coins? (1 - " << allowed <<"):";
            std::cin >> selection;

            if (selection < 1 || selection > allowed)
                std::cout << "Invalid input. Please try again." << std::endl;
        } while (selection < 1 || selection > allowed);


        previousMove = selection;
    }


    pile -= selection;
    std::cout << "There are " << pile << " coins left in the pile." << std::endl;
    

    line();
    loading(3);
    clearScreen();


    if (pile == 0)
        defineWinner(winner);
    else
        computerTurn(first, pile, winner, previousMove);
}


void computerTurn(bool& first, int& pile, bool& winner, int& previousMove)
{
    int random;


    std::cout << "It is the computer's turn." << std::endl;
    line();


    if (first)
    {
        firstRoundExplanation();


        if (pile == 1)
            random = 1;
        else
            random = 1 + (rand() % (pile - 1));


        previousMove = random;
    }
    else
    {
        int allowed = maximum(pile, previousMove);


        random = 1 + (rand() % (allowed));


        previousMove = random;
    }


    pile -= random;
    std::cout << "The computer removed " << random << " coins from the pile." << std::endl;
    std::cout << "There are " << pile << " coins left on the pile." << std::endl;
    line();


    if (first)
        loading(18);
    else
        loading(7);
    clearScreen();
    first = false;


    if (pile == 0)
    {
        winner = false;
        defineWinner(winner);
    }
    else
        userTurn(first, pile, winner, previousMove);
}


void defineWinner(bool& winner)
{
    if (winner)
        std::cout << "Congratulations! You won the game!" << std::endl;
    else
        std::cout << "What a loser, you were beat by the computer." << std::endl;
}


