#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{

    ifstream inFile;
    inFile.open("C:\\Users\\lucas\\CLionProjects\\Practice12\\numbers.txt");

    if (inFile.fail())
    {
        cerr << "Error opening file" << endl;
    }
    else
    {
        cout << "File opened successfully" << endl;
    }

    int x,y;

    inFile >> x >> y;

    cout << "Num 1:" << x << endl;
    cout << "Num 2:" << y << endl;


    return 0;
}
