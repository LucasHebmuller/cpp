#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{
    ofstream outFile;
    outFile.open("C:\\Users\\lucas\\CLionProjects\\Practice16\\sample.txt");

    outFile << "First number: " << 5 << endl;

    outFile.close();


    return 0;
}