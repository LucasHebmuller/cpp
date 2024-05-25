#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;


void getItem( vector<string> &items, vector<double> &prices );
void receipt( vector<string> &items, vector<double> &prices );


int main()
{
    vector<string> items;
    vector<double> prices;

    cout << setprecision(2) << fixed;

    getItem( items, prices );
    receipt( items, prices );


    return 0;
}


void getItem(vector<string> &items, vector<double> &prices)
{
    string name;
    double money;

    do
    {
        cout << "What is the name of the item?";
        cin >> name;
        items.push_back(name);

        if ( name == "done" )
        {
            break;
        }

        cout << "What is the price?";
        cin >> money;
        prices.push_back(money);

    } while ( true );

    cout << endl;
}


void receipt(vector<string> &items, vector<double> &prices)
{
    const int SPACE = 15;
    const double TAX = 0.6;

    for ( int i = 0; i < prices.size() ; i++ )
    {
        cout << left << setw(SPACE) << items[i] << "$" << prices[i] << endl;
    }

}