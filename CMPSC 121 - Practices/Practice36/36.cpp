#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


struct payInfo
{
    string name;
    int hours;
    double payRate;
};


int main()
{
    cout << fixed << showpoint << setprecision(2);

    const int NUM_WORKERS = 3, SPACE = 15;
    payInfo workers[ NUM_WORKERS ];

    for ( int i = 0; i < NUM_WORKERS; i++ )
    {
        cout << "Enter the name of employee " << ( i + 1 ) << ":";
        cin >> workers[i].name;

        cout << "Enter the hours worked by employee " << ( i + 1 ) << ":";
        cin >> workers[i].hours;

        cout << "Enter the pay rate of employee " << ( i + 1 ) << ":";
        cin >> workers[i].payRate;

        cout << endl;
    }

    cout << "Here is the gross payment of each employee:" << endl;
    cout << "-------------------------------------------" << endl;
    for ( int i = 0; i < NUM_WORKERS; i ++)
    {
        double gross;
        gross = workers[i].hours * workers[i].payRate;

        cout << left << setw(SPACE) << "Name: " << workers[i].name << endl;
        cout << left << setw(SPACE) << "Hours worked: " << workers[i].hours << endl;
        cout << left << setw(SPACE) << "Pay rate: " << "$" << workers[i].payRate << endl;
        cout << left << setw(SPACE) << "Gross payment: " << "$" << gross << endl;

        cout << endl;
    }


    return 0;
}