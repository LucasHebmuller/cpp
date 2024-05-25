/**
 * UniversalTicket.cpp:
 * The program asks the user for some information about their visit to Universal Studios and calculates the cost of this visit based on the information given.
 *
 * @author Lucas Hebmuller
 */


#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    const int WIDTH = 22;
    int days;
    char pass, resort;
    double totalTicket, totalPass, totalCost;
    cout << fixed << setprecision(2);


    cout << "Welcome to Universal Studios!";

    cout << "How many days are you attending?";
    cin >> days;

    cout << "Do you want Express Pass?";
    cin >> pass;


    totalTicket = ( days * 100.00);
    totalPass = ( days * 79.00);


    if ( pass == 'Y')
    {
        cout << "Are you staying at a Premier Resort?";
        cin >> resort;

        cout << endl;

        if ( resort == 'Y')
        {
            totalCost = totalTicket;

            cout << "RECEIPT" << endl;
            cout << "- - - - - - - - - - - - - - -" << endl;
            cout << left << setw(WIDTH) << "Total Ticket Cost" << right << "$" << totalTicket << endl;
            cout << left << setw(WIDTH) << "Express Pass" << right << "FREE" << endl;
            cout << left << setw(WIDTH) << "TOTAL COST" << right << "$" << totalCost << endl;
        }
        else
        {
            totalCost = totalTicket + totalPass;

            cout << "RECEIPT" << endl;
            cout << "- - - - - - - - - - - - - - -" << endl;
            cout << left << setw(WIDTH) << "Total Ticket Cost" << right << "$" << totalTicket << endl;
            cout << left << setw(WIDTH) << "Express Pass" << right << "$" << totalPass << endl;
            cout << left << setw(WIDTH) << "TOTAL COST" << right << "$" << totalCost << endl;
        }
    }

    else
    {
        totalCost = totalTicket;

        cout << "RECEIPT" << endl;
        cout << "- - - - - - - - - - - - - - -" << endl;
        cout << left << setw(WIDTH) << "Total Ticket Cost" << right << "$" << totalTicket << endl;
        cout << endl;
        cout << left << setw(WIDTH) << "TOTAL COST" << right << "$" << totalCost << endl;
    }


    return 0;
}

/*
 * SAMPLE EXECUTION:
 * Welcome to Universal Studios!How many days are you attending?4
 * Do you want Express Pass?Y
 * Are you staying at a Premier Resort?N
 *
 * RECEIPT
 * - - - - - - - - - - - - - - -
 * Total Ticket Cost     $400.00
 * Express Pass          $316.00
 * TOTAL COST            $716.00
 */