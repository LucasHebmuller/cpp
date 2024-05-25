#include <iostream>
#include <iomanip>

using namespace std;


void separation( char ch = '-' , int size = 20 );
double sum( double a, double b, double c);

int main()
{
    double p1,p2,p3,total;

    cout << "What was the price of the first item you bought?";
    cin >> p1;
    cout << "What was the price of the second item you bought?";
    cin >> p2;
    cout << "What was the price of tne third item you bought?";
    cin >> p3;
    total = sum(p1,p2,p3);

    separation( '=', 15);

    cout << "RECEIPT" << endl;
    separation('-',15);
    cout << left << setw(10) << "Item 1" << "$" << p1 << endl;
    cout << left << setw(10) << "Item 2" << "$" << p2 << endl;
    cout << left << setw(10) << "Item 3" << "$" << p3 << endl;
    cout << left << setw(10) << "Total " << "$" << total << endl;
    separation('-',15);


    return 0;
}

void separation( char ch , int size)
{
    for ( int i = 1; i <= size; i++)
    {
        cout << ch;
    }
    cout << endl;
}

double sum( double a, double b, double c)
{
    double result;
    result = a + b + c;
    return result;
}