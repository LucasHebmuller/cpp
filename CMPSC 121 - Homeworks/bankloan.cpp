/**
 * bankloan.cpp:
 * The program should prompt the user if they want to take out a loan and, by using a bank flowchart, determine if the user is eligible for the loan.
 *
 * @author Lucas Hebmuller
 */


#include <iostream>
#include <string>

using namespace std;


bool askLoan();
double askAmount();
double askIncome();
bool decideLoan( double loan, double income);


int main()
{
    bool x = askLoan();
    if ( x == true )
    {
        double loan = askAmount();
        double income = askIncome();
        bool y = decideLoan(  loan,  income );
        if ( y == true )
            cout << "Congratulations! Your loan request for $" << loan << " has been accepted!" << endl;
        else
            cout << "Sorry! Your loan request for $" << loan << " has been rejected..." << endl;
    }


    return 0;
}


bool askLoan()
{
    do
    {
        string answer;

        cout << "Would you like to take out a loan?";
        cin >> answer;

        if ( answer == "Yes" || answer == "Y" || answer == "yes" || answer == "y")
        {
            return true;
        }
        else if ( answer == "No" || answer == "N" || answer == "no" || answer == "n")
        {
            cout << "Thanks for visiting the bank!" << endl;
            return false;
        }
        else
        {
            cout << "Invalid choice; please enter yes or no." << endl;
        }
    }while( true );
}


double askAmount()
{
    do
    {
        double loan;

        cout << "How much would you like to borrow?";
        cin >> loan;

        if ( loan < 0 )
        {
            cout << "Invalid choice; please enter a positive number." << endl;
        }
        else
        {
            return loan;
        }
    }while( true );
}


double askIncome()
{
    do
    {
        double income;

        cout << "What is your yearly income?";
        cin >> income;

        if ( income < 0 )
        {
            cout << "Invalid choice; please enter a positive number." << endl;
        }
        else
        {
            return income;
        }
    } while( true );
}


bool decideLoan( double loan, double income )
{
    if ( income <= 10000 )
        return false;
    else if ( income > 10000 && income < 100000 )
    {
        if ( income * 5 >= loan)
            return true;
        else
            return false;
    }
    else
        return true;
}


/*
 * SAMPLE EXECUTION:
 * Would you like to take out a loan?Yes
 * How much would you like to borrow?-15
 * Invalid choice; please enter a positive number.
 * How much would you like to borrow?37500
 * What is your yearly income?28900
 *Congratulations! Your loan request for $37500 has been accepted!
 */
