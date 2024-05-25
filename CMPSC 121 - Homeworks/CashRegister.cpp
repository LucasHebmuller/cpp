/**
 * CashRegister.cpp:
 * The program should prompt the user for items they are purchasing and then display a receipt.
 *
 * @author Lucas Hebmuller
 */


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


void getItem( string items[], double prices[], int size );
void receipt( string items[], double prices[], int size );


int main()
{
    const int SIZE = 3;
    string items[SIZE];
    double prices[SIZE];

    cout << setprecision(2) << fixed;

    getItem( items, prices, SIZE );
    receipt( items, prices, SIZE );


    return 0;
}


void getItem( string items[], double prices[], int size )
{
    for ( int i = 0; i < size; i++)
    {
        string name;
        cout << "What is the name of the item?";
        cin >> name;
        items[i] = name;

        double price;
        cout << "What is the price of the item?";
        cin >> price;
        prices[i] = price;
    }

    cout << endl;
}


void receipt(string items[], double prices[], int size )
{
    const int SPACE = 15;
    const double TAX = 0.06;
    double subtotal = 0, tax, total;

    for ( int i = 0; i < size; i++ )
    {
        subtotal += prices[i];
    }

    tax = subtotal * TAX;
    total = subtotal - tax;

    for ( int i = 0; i < size ; i++ )
    {
        cout << left << setw(SPACE) << items[i] << "$" << prices[i] << endl;
    }

    cout << "---------------------------" << endl;

    cout << left << setw(SPACE) << "Subtotal" << "$" << subtotal << endl;
    cout << left << setw(SPACE) << "Tax (6%)" << "$" << tax << endl;
    cout << left << setw(SPACE) <<"Total" << "$" << total << endl;

}


/*
 * EXECUTION SAMPLE:
 * What is the name of the item?Water
 * What is the price of the item?0.98
 * What is the name of the item?Pizza
 * What is the price of the item?2.25
 * What is the name of the item?Salt
 * What is the price of the item?1.13
 *
 * Water          $0.98
 * Pizza          $2.25
 * Salt           $1.13
 * ---------------------------
 * Subtotal       $4.36
 * Tax (6%)       $0.26
 * Total          $4.10
 */