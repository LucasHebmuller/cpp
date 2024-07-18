#include <iostream>
using namespace std;

#include "BST.h"

int main()
{
    // Testing constructor and empty()
    BST<int> intBST;
    cout << "Constucting empty BST." << endl;
    cout << "BST " << (intBST.empty() ? "is" : "is not") << " empty." << endl;

    // Tetsing inorder
    cout << "Inorder traversal of BST: " << endl;
    intBST.inorder(cout);

    // Testing insert
    cout << endl << "Now insert a bunch of integers into the BST."
         << endl <<  "Try items not in the BST and some that are in it: " << endl;
    int number;
    for (;;) {
        cout << "Item to insert (-999 to stop): ";
        cin >> number;
        if (number == -999) break;
        intBST.insert(number);
    }
    intBST.graph(cout);

    cout << "BST " << (intBST.empty() ? "is" : "is not") << " empty." << endl;
    cout << "Inorder traversal of BST: " << endl;
    intBST.inorder(cout);

    cout << endl << endl;

    // Testing search()
    cout << endl << "Now testing the search() operation."
         << endl << "Try both items in the BST and some not in it: " << endl;
    for (;;) {
        cout << "Item to find (-999 to stop): ";
        cin >> number;
        if (number == -999) break;
        cout << (intBST.search(number) ? "Found" : "Not found") << endl;
    }

    // Testing remove()
    cout << endl << "Now testing the remove() operation."
         << endl << "Try both items in the BST and some not in it:" << endl;
    for (;;) {
        cout << "Item to remove (-999 to stop): ";
        cin >> number;
        if (number == -999) break;
        intBST.remove(number);
        intBST.graph(cout);
    }

    cout << endl << "Inorder traversal of BST: " << endl;
    intBST.inorder(cout);
    cout << endl;
}
