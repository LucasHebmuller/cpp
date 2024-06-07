#include <iostream>
#include <iomanip>
using namespace std;


/*-----------------------------------------------------------------------
  AirplaneSeats.cpp displays the avaiable seats in an airplane and allows
  the user to reserve a seat and to cancel a seat.
  
  @author Lucas Hebmuller
  @date 06/07/2024
------------------------------------------------------------------------*/


void menu(char [], int);
void initializeSeats(char [], int);
void displayAvailable(char [], int);
void reserveSeat(char [], int);
void cancelSeat(char [], int);


const int WIDTH = 3; // global variable


int main()
{
    const int MAX_SEATS = 10;
    char seat[MAX_SEATS];

    initializeSeats(seat, MAX_SEATS);
    menu(seat, MAX_SEATS);

    return 0;
}


/*-----------------------------------------------------------------------
    Function to display a menu for the user to choose
------------------------------------------------------------------------*/
void menu(char seat[], int MAX_SEATS)
{
    cout << "--MENU------------------------------" << endl << endl;
    cout << left << setw(WIDTH)  << "" << "Select one of the options: " << endl;
    cout << left << setw(WIDTH) << "" << "[1] Display available seats" << endl;
    cout << left << setw(WIDTH) << "" << "[2] Reserve a seat" << endl;
    cout << left << setw(WIDTH) << "" << "[3] Cancel a seat" << endl;
    cout << left << setw(WIDTH) << "" << "[4] Exit" << endl << endl;

    int pick;
    do {
        cout << "Enter your choice(1-4): ";
        cin >> pick;
        cout << "------------------------------------" << endl << endl;

        switch (pick)
        {
            case 1:
                displayAvailable(seat, MAX_SEATS);
                break;
            case 2:
                reserveSeat(seat, MAX_SEATS);
                break;
            case 3:
                cancelSeat(seat, MAX_SEATS);
                break;
            case 4:
                cout << "Have a great flight!" << endl;
                break;
            default:
                cout << "Invalid input. Please enter a number between 1 and 4." << endl;
                break;
        }

    } while(pick > 4 || pick < 1); 
}


/*-----------------------------------------------------------------------
    Function to initialize the seats of the airplane
------------------------------------------------------------------------*/
void initializeSeats(char seat[], int MAX_SEATS)
{
    for(int i = 0; i < MAX_SEATS; i++)
        seat[i] = ' ';
}


/*-----------------------------------------------------------------------
    Function to display the avaiable seats in the airplane
------------------------------------------------------------------------*/
void displayAvailable(char seat[], int MAX_SEATS)
{
    cout << "Avaiable seats: ";
    for(int i = 0; i < MAX_SEATS; i++)
    {
        if(seat[i] == ' ')
            cout << i + 1 << " ";
    }
    cout << endl << endl;

    menu(seat, MAX_SEATS);
}


/*-----------------------------------------------------------------------
    Function to reserve a seat in the airplane
------------------------------------------------------------------------*/
void reserveSeat(char seat[], int MAX_SEATS)
{
    int choice;
    do {
        cout << "What is the seat you would like to reserve?" << endl;
        cout << "Enter your choice(1-" << MAX_SEATS << "): ";
        cin >> choice;

        if(choice > MAX_SEATS || choice < 1)
            cout << "Invalid input. Please enter a number between 1 and " << MAX_SEATS << "." << endl;
    } while(choice > MAX_SEATS || choice < 1);

    if(seat[choice - 1] == 'X')
        cout << "It was not possible to reserve the seat " << choice << " because it is already taken." << endl;
    else
    {
        seat[choice - 1] = 'X';
        cout << "Your seat was reserved!" << endl;
    }

    cout << endl;

    menu(seat, MAX_SEATS);
}


/*-----------------------------------------------------------------------
    Function to cancel a seat in the airplane
------------------------------------------------------------------------*/
void cancelSeat(char seat[], int MAX_SEATS)
{
    int choice;
    do {
        cout << "What is the seat you would like to cancel?" << endl;
        cout << "Enter your choice(1-" << MAX_SEATS << "): ";
        cin >> choice;

        if(choice > MAX_SEATS || choice < 1)
            cout << "Invalid input. Please enter a number between 1 and " << MAX_SEATS << "." << endl;
    } while(choice > MAX_SEATS || choice < 1);

    if(seat[choice - 1] == ' ')
        cout << "There is no reservation for this seat." << endl;
    else
    {
        seat[choice - 1] = ' ';
        cout << "This seat was canceled!" << endl;
    }

    cout << endl;

    menu(seat, MAX_SEATS);
}
