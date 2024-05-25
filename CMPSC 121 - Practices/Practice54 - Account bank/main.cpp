/**
 * Account.cpp:
 * Page 781 of the book.
 *
 * @author Lucas Hebmuller( copied from the book ).
*/


#include <iostream>
#include <iomanip>
#include <cctype>
#include "Account.h"
using namespace std;


void displayMenu();
void makeDeposit( Account & );
void withdraw(Account & );


int main()
{
    Account savings;
    char choice;

    cout << fixed << showpoint << setprecision(2);

    do
    {
      displayMenu();
      cin >> choice;

      while( toupper( choice ) < 'A' || toupper( choice ) > 'G' )
      {
          cout << "Please make a choice in the range of A trough G";
          cin >> choice;
      }

      switch( choice )
      {
          case 'A':
          case 'a':
              cout << "The current balance is: $" << savings.getBalance() << endl;
              break;
          case 'B':
          case 'b':
              cout << "There have been " << savings.getTransaction() << " transactions" << endl;
              break;
          case 'C':
          case 'c':
              cout << "Interest earned for this period: $" << savings.getInterest() << endl;
              break;
          case 'D':
          case 'd':
              makeDeposit( savings );
              break;
          case 'E':
          case 'e':
              withdraw( savings );
              break;
          case 'F':
          case 'f':
              savings.calcInterest();
              cout << "Interest added" << endl;
      }
    } while( toupper( choice ) != 'G' );


    return 0;
}


void displayMenu()
{
    cout << endl << "               MENU               " << endl;
    cout << "-------------------------------------" << endl;
    cout << "A) Display the account balance" << endl;
    cout << "B) Display the number of transactions" << endl;
    cout << "C) Display interest earned for this period" << endl;
    cout << "D) Make a deposit" << endl;
    cout << "E) Make a withdraw" << endl;
    cout << "F) Add interest for this period" << endl;
    cout << "G) Exit the program" << endl;
    cout << "Enter your choice: ";
}


void makeDeposit( Account &acnt )
{
    double dollars;

    cout << "Enter the amount of the deposit: ";
    cin >> dollars;

    cin.ignore();
    acnt.makeDeposit( dollars );
}


void withdraw(Account &acnt )
{
    double dollars;

    cout << "Enter the amount of the withdrawal: ";
    cin >> dollars;

    cin.ignore();
    if ( !acnt.withdraw( dollars ) )
        cout << "ERROR! Withdrawal amount too large.";
}


