#include <iostream>
#include <stack>
using namespace std;


/******************************************************************************
 * Node class declaration.
 * DO NOT modify.
******************************************************************************/
class Node
{
    public:
        int data;
        Node* next;
};
/******************************************************************************
* Functions you have to implement
******************************************************************************/
//Problem A: Remove part of a linked list.
void Remove(Node* &llist, unsigned startIndex, unsigned endIndex)
{
    Node * cur = llist;
    Node * prev = nullptr;

    int currentIndex = 0;
    while (currentIndex < startIndex && cur != nullptr) // find the startIndex in the llist
    {
        prev = cur; // prev stores the cur value after the cur goes to the next
        cur = cur->next;
        currentIndex++;
    }

    while (currentIndex <= endIndex && cur != nullptr)  // going from the startIndex to the endIndex
    {
        Node * temp = cur;
        cur = cur->next;
        delete temp; // elements between the indexes deleted
        currentIndex++;
    } // gap created in the list between the elements before and after the deleted elements

    if (prev != nullptr)
        prev->next = cur;
    else
        llist = cur;
    // the gap between the startIndex and endIndex that was created due to the deletions does not exist anymore
}


//Problem B: Reversing a linked list.
void ReverseList(Node* &llist)
{
    Node * prev = nullptr;
    Node * next = nullptr;
    Node * cur = llist;

    while ( cur != nullptr )
    {
        next = cur->next; // next is ahead of cur
        cur->next = prev; // cur points to prev
        prev = cur; // prev gets the same as cur
        cur = next; // cur advances
    }

    llist = prev; // head receives prev, which is one before the null (last element)
}


//Problem C: Perform a right shift to a Linked List.
void RightShift(Node* &llist)
{
    Node * cur = llist;
    Node * temp = nullptr;

    while ( cur->next != nullptr )
    {
        temp = cur; // temp stores the cur value
        cur = cur->next;  // cur advances, temp stores the previous cur value
    }

    temp->next = nullptr; // second last needs to become the last, so after the last comes the NULL
    cur->next = llist; // cur (that was the last before null) now points to the beginning
    llist = cur; // beginning gets last

}


//Problem D: Test if a list is a palindrome.
bool IsPalindrome(Node* llist)
{
    Node * mid = llist;
    Node * end = llist; // end is used only to make mid point to the middle
    while ( end != nullptr && end->next != nullptr) // two conditions because the end double jumps
    {
        mid = mid->next;
        end = end->next->next; // double jump
    } // mid points to the middle of the llist

    Node * prev = nullptr;
    Node * cur = mid; // starts counting on the middle
    while ( cur != nullptr )
    {
        Node * next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    } // llist after middle get reversed

    Node * original = llist;
    Node * reversed = prev; // prev is the last element in the original llist
    while ( reversed != nullptr )
    {
        if (original->data != reversed->data)
            return false;
        original = original->next;
        reversed = reversed->next;
    }

    return true;
}
/******************************************************************************
 * Functions that used by the driver.
 * DO NOT modify these functions.
******************************************************************************/
Node* CreateList(int* arr, int len)
{
    if (len <= 0 || arr == nullptr) {
        return nullptr;
    }
    Node* head = new Node();
    head->data = arr[len - 1];
    head->next = nullptr;
    for (int i = 1; i < len; i++) {
        Node* temp = new Node();
        temp->next = head;
        temp->data = arr[len - i - 1];
        head = temp;
    }
    return head;
}


void RemoveAll(Node*& first)
{
    Node* cur = first;
    while (cur != nullptr) {
        Node* del = cur;
        cur = cur->next;
        delete del;
    }
    first = nullptr;
}


void ShowList(Node* llist)
{
    Node* cur = llist;
    while (cur != nullptr) {
        cout << cur->data << " ";
        cur = cur->next;
    }
    cout << endl;
}


/******************************************************************************
 * Test driver main function.
 * DO NOT modify the main function.
 ******************************************************************************/
int main()
{
    cout << "Problem A, test case 1, removing [2]-[4]:" << endl;
    int a[] = { 2, 5, 8, 10, 15 };
    Node* llistA = CreateList(a, 5);
    ShowList(llistA);
    cout << "Result List:" << endl;
    Remove(llistA, 2, 4);
    ShowList(llistA);
    cout << "Problem A, test case 2, removing [0]-[3]:" << endl;
    int b[] = { 1, 6, 8, 13, 15, 26, 30 };
    Node* llistB = CreateList(b, 7);
    ShowList(llistB);
    cout << "Result List:" << endl;
    Remove(llistB, 0, 3);
    ShowList(llistB);

    ///////////////////////////////////////////////////

    RemoveAll(llistA);
    RemoveAll(llistB);
    llistA = CreateList(a, 5);
    llistB = CreateList(b, 7);
    cout << "Problem B, test case 1, reversing list:" << endl;
    ShowList(llistA);
    cout << "Reversed List:" << endl;
    ReverseList(llistA);
    ShowList(llistA);
    cout << "Problem B, test case 2, reversing list:" << endl;
    ShowList(llistB);
    cout << "Reversed List:" << endl;
    ReverseList(llistB);
    ShowList(llistB);

    ///////////////////////////////////////////////////

    RemoveAll(llistA);
    RemoveAll(llistB);
    llistA = CreateList(a, 5);
    llistB = CreateList(b, 7);
    cout << "Problem C, test case 1, right shift:" << endl;
    ShowList(llistA);
    cout << "Resulting List:" << endl;
    RightShift(llistA);
    ShowList(llistA);
    cout << "Problem C, test case 2, right shift:" << endl;
    ShowList(llistB);
    cout << "Resulting List:" << endl;
    RightShift(llistB);
    ShowList(llistB);

    //////////////////////////////////////////////////

    cout << "Problem D, test case 1, test if palindrome:" << endl;
    int g[] = { 1, 4, 6, 7, 6, 4, 1 };
    Node* llistG = CreateList(g, 7);
    ShowList(llistG);
    cout << ((IsPalindrome(llistG)) ? "True" : "False") << endl;
    cout << "Problem D, test case 2, test if palindrome:" << endl;
    int h[] = {1, 4, 6, 7, 6, 4 };
    Node* llistH = CreateList(h, 6);
    ShowList(llistH);
    cout << ((IsPalindrome(llistH)) ? "True" : "False") << endl;


    return 0;
}


