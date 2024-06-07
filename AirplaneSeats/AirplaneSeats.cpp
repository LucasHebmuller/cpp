#include <iostream>
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
//void cancelSeat(char [], int);


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
    cout << "--MENU-------------------------" << endl << endl;
    cout << "   Select one of the options: " << endl;
    cout << "   [1] Display available seats" << endl;
    cout << "   [2] Reserve a seat" << endl;
    cout << "   [3] Cancel a seat" << endl;
    cout << "   [4] Exit" << endl << endl;

    int pick;
    do {
        cout << "Enter your choice(1-4): ";
        cin >> pick;

        switch (pick)
        {
            case 1:
                displayAvailable(seat, MAX_SEATS);
                break;
            case 2:
                reserveSeat(seat, MAX_SEATS);
                break;
            case 3:
                cout << "Not done yet." << endl;
                break;
            case 4:
                cout << "Have a great flight!" << endl;
                break;
            default:
                cout << "Invalid input. Please enter a number between 1 and 4." << endl;
                break;
        }

        cout << "--------------------------------" << endl << endl;

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
}


/*-----------------------------------------------------------------------
    Function to reserve a seat in the airplane
------------------------------------------------------------------------*/
void reserveSeat(char seat[], int MAX_SEATS)
{
    int choice = 0;
    cout << "What is the seat you would like to reserve? (1 - " << MAX_SEATS <<")" << endl;
    cin >> choice;

    if(seat[choice - 1] == 'X')
        cout << "It was not possible to reserve this seat." << endl;
    else
    {
        seat[choice - 1] = 'X';
        cout << "Your seat was reserved!" << endl;
    }
}
