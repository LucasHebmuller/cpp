#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main()
{
    ifstream inFile;
    inFile.open("C:\\Users\\lucas\\CLionProjects\\Practice15\\list.txt");

    if ( inFile.fail() )
    {
        cerr << "Error opening file" << endl;
    }

    string item;
    int count = 0;

    while ( !inFile.eof() )
    {
        inFile >> item;
        if ( item == "orange" )
        {
            count++;
        }
    }

    cout << count << " items found" << endl;


    return 0;
}