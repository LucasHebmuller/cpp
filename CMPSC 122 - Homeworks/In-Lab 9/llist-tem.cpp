#include <iostream>
using namespace std;


// Declaration of Node class template
template <typename T>
class Node
{
    public:
        T data;
        Node<T> *next;
};


// Insert. Fill in your code here...
template <typename T>
void insert( Node<T>* & first, int pos, T item)
{
    if( pos == 0 )
    {
        Node<T> * temp = first;
        first = new Node<T>;
        first->data = item;
        first->next = temp;
    }
    else
    {
        Node<T> * prev = first;
        int prevIndex = 0;
        while ( prevIndex < pos - 1)
        {
            prev = prev->next;
            prevIndex++;
        }
        Node<T> * temp = prev->next;
        prev->next = new Node<T>;
        prev->next->data = item;
        prev->next->next = temp;
    }
}


// Display
template <typename T>
void display(Node<T> *first)
{
    Node<T> * cur = first;
    while(cur != nullptr){
        cout << (cur->data) << " ";
        cur = cur->next;
    }
    cout << endl;
}


int main()
{
    Node<int> * ifirst = nullptr; // Empty linked list of integer
    insert<int>(ifirst, 0, 5);
    insert<int>(ifirst, 0, 6);
    insert<int>(ifirst, 0, 7);
    insert<int>(ifirst, 1, 8);
    insert<int>(ifirst, 4, 100);
    cout << "A Linked List of Integers: " << endl;
    display<int>(ifirst);
    Node<double> * dfirst = nullptr; // Empty linked list of doubles
    insert<double>(dfirst, 0, 5.4);
    insert<double>(dfirst, 0, 23.4);
    insert<double>(dfirst, 0, 7.253);
    insert<double>(dfirst, 1, 100.45);
    insert<double>(dfirst, 4, 15.84);
    cout << "A Linked List of Doubles: " << endl;
    display<double>(dfirst);
}