#include <iostream>
using namespace std;


/*-----------------------------------------------------------------------
  AirplaneSeats.cpp displays the avaiable seats in an airplane and allows
  the user to reserve a seat and to cancel a seat.
  
  @author Lucas Hebmuller
  @date 06/07/2024
------------------------------------------------------------------------*/


void initializeSeats(char [], int);
void displayAvailable(char [], int);
void reserveSeat(char [], int);
//void cancelSeat(char [], int);


int main()
{
    const int MAX_SEATS = 10;
    char seat[MAX_SEATS];

    initializeSeats(seat, MAX_SEATS);
    
    displayAvailable(seat, MAX_SEATS);

    char answer;
    cout << "Would you like to reserve a seat? (y/n)" << endl;
    cin >> answer;

    if(answer == 'y')
        reserveSeat(seat, MAX_SEATS);

    cout << "Have a great flight!" << endl;

    return 0;
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
