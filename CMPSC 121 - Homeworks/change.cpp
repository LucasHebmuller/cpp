/**
 * change.cpp:
 * The program should calculate the cost of an item with taxes included and calculate the change based on how much the client paid
 *
 * @author Lucas Hebmuller
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
    const int WIDTH1 = 20, WIDTH2 = 0;
    const double SALES_TAX = 0.06;
    double price, finalTax, change, cost, paid;
    string item;

    cout << setprecision(2) << fixed;

    cout << "What is the item?";
    getline(cin,item);
    cout << "How much did it cost?";
    cin >> cost;
    cout << "Hou much was paid?";
    cin >> paid;
    cout << endl;

    finalTax = ( cost * SALES_TAX );
    price = ( cost + finalTax );
    change = ( paid - price );

    cout << "Receipt" << endl;
    cout << left << setw(WIDTH1) << item << right << setw(WIDTH2) << "$" << cost << endl;
    cout << left << setw(WIDTH1) << "Tax" << right << setw(WIDTH2) << "$" << finalTax << endl;
    cout << left << setw(WIDTH1) << "Total Cost" << right << setw(WIDTH2) << "$" <<  price << endl;
    cout << left << setw(WIDTH1) << "Amount Given" << right << setw(WIDTH2) << "$" << paid << endl;
    cout << left << setw(WIDTH1) << "Change" << right << setw(WIDTH2) << "$" << change << endl;

    return 0;
}

/*
 * EXECUTION SAMPLE:
 * What is the item?C++ Book
 * How much did it cost?58
 * Hou much was paid?70
 *
 * Receipt
 * C++ Book            $58.00
 * Tax                 $3.48
 * Total Cost          $61.48
 * Amount Given        $70.00
 * Change              $8.52
 */