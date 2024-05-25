#include <iostream>
#include <cstring>
using namespace std;


int main(){
    char he[15] = "HELLO";
    char w[] = " WORLD.";

    strcat(he, w);

    cout << he << endl; // HELLO WORLD.\0

    return 0;
}
