#include <iostream>
#include <stack>
using namespace std;
/******************************************************************************
 * Node class declaration.
 * DO NOT modify.
******************************************************************************/
class Node {
public:
    int data;
    Node * next;
};
/******************************************************************************
 * Functions that used by the main.
 * DO NOT modify these functions.
******************************************************************************/
// Print the elements of the linked list to the screen. llist is a pointer
// that points to the first node of the linked list.
void ShowList(Node * llist){
    Node * cur = llist;
    while(cur != NULL){
        cout << cur->data << " ";
        cur = cur->next;
    }
    cout << endl;
}
/******************************************************************************
 * Test driver main function.
 * DO NOT modify the main function.
 ******************************************************************************/
int main() {
    // The following would create a linked list of 3 items: 3,2,1, and let
    // "first" points to the first node of the linked list
    Node * first = NULL;
    for(int i = 1; i < 4; i++){
        Node * temp = first;
        first = new Node;
        first->data = i;
        first->next = temp;
    }
    cout << "The current linked list:" << endl;
    ShowList(first);
    ////////////////////////////////
    // Write your code here.
    // insert "10" in between "2" and "1". So that the linked list would become 3 2 10 1

    Node *p1 = first;
    Node *p2 = first->next->next;
    p1->next->next = new Node;
    p1->next->next->data = 10;
    p1->next->next->next = p2;

    // Testing:
    cout << "The linked list after insertion:" << endl;
    ShowList(first);
}

