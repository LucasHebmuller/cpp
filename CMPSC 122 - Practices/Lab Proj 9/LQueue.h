//
// Created by Lucas Hebmuller on 3/14/2023.
//
// File: LQueue.h
// ================
/*
Queue Implementation using Linked List
========================================
Basic operations:
constructor: Constructs an empty queue
explicit constructor: Constructs a queue from an array
copy constructor: Constructs a copy of a queue
=: Assignment operator
destructor: Destroys a queue
empty: Checks if a queue is empty
enqueue: Modifies a queue by adding a value at the back
front: Accesses the top stack value; leaves queue unchanged
dequeue: Modifies queue by removing the value at the front
display: Displays all the queue elements
-------------------------------------------------------------------
*/


#ifndef LQUEUE_H
#define LQUEUE_H


#include <iostream>
#include <limits.h>
using namespace std;


// IMPORTANT!!!
// Your test outputs should include the following 2 difference data types:
// Compile and run with long type (comment out the #define QUEUE_ELEMENT "STRING"),
// copy and paste the output at the end of this header file
// Compile and run with string type (comment out the #define QUEUE_ELEMENT "LONG"),
// copy and paste the output at the end of this header file
// select one of the options below:


#define QUEUE_ELEMENT_LONG
//#define QUEUE_ELEMENT_STRING


#ifdef QUEUE_ELEMENT_LONG
typedef long QueueElement;
const QueueElement GARBAGE_VALUE = LONG_MIN; // -2147483648


#else
#ifdef QUEUE_ELEMENT_STRING
typedef string QueueElement;
const QueueElement GARBAGE_VALUE = "<nullptr>";
#else
// default typedef
typedef int QueueElement;
const QueueElement GARBAGE_VALUE = INT_MIN; // -2147483648
#endif
#endif


class Queue
{
    public:
        Queue(); // Constructor
        Queue(QueueElement array[], int array_size); // Explicit Constructor
        Queue(const Queue & original); // Copy Constructor
        ~Queue(); // Destructor
        const Queue & operator= (const Queue & original); // Assignment Operator
        bool empty() const;
        void enqueue(const QueueElement & data);
        void display(ostream & out) const;
        QueueElement front() const;
        void dequeue();
    private:
    // The linked list is hidden from the user,
    // achieving a higher degree of data hiding
        struct Node
        {
            QueueElement data;
            Node* next;
        };
        Node * myFront; // front and
        Node * myBack; // back of queue
};
// end of class declaration


#endif


/*
 * EXECUTION SAMPLE 1:
Queue created. Empty? Yes
How many elements to add to the queue? 10
Contents of queue q1 (via print):
166 333 500 666 833 1000 1166 1333 1500 1666
Contents of queue q2 after q2 = q1 (via print):
166 333 500 666 833 1000 1166 1333 1500 1666
Queue q2 empty? No
Front value in q2: 166
Remove front -- Queue contents: 333 500 666 833 1000 1166 1333 1500 1666
Remove front -- Queue contents: 500 666 833 1000 1166 1333 1500 1666
Remove front -- Queue contents: 666 833 1000 1166 1333 1500 1666
Remove front -- Queue contents: 833 1000 1166 1333 1500 1666
Remove front -- Queue contents: 1000 1166 1333 1500 1666
Remove front -- Queue contents: 1166 1333 1500 1666
Remove front -- Queue contents: 1333 1500 1666
Remove front -- Queue contents: 1500 1666
Remove front -- Queue contents: 1666
Remove front -- Queue contents:
Queue q2 empty? Yes
Attempt to read front value of q2:
Error: Queue is empty! nothing to retrieve.
Front value in q2: -2147483648
Trying to remove front of q2:
Error: Queue is empty! cannot remove from queue.
Contents of queue q3 (via print):
123 247 371 494 618 742 865 989 1113 1236 1360 1484 1607 1731 1855
Contents of queue q3 after q3 = q1 (via print):
166 333 500 666 833 1000 1166 1333 1500 1666
Contents of queue q3 (via print):
otterhound Saint Rottweiler retriever Maltese spaniel Russell basset pointer
        Samoyed fox Rottweiler
Contents of queue q3 after q3 = q1 (via print):
border Tibetan black collie terrier silky Labrador saluki
 */


/*
 * EXECUTION SAMPLE 2:
Queue created. Empty? Yes
How many elements to add to the queue? 8
Contents of queue q1 (via print):
border Tibetan black collie terrier silky Labrador saluki
Contents of queue q2 after q2 = q1 (via print):
border Tibetan black collie terrier silky Labrador saluki
Queue q2 empty? No
Front value in q2: border
Remove front -- Queue contents: Tibetan black collie terrier silky Labrador saluki
Remove front -- Queue contents: black collie terrier silky Labrador saluki
Remove front -- Queue contents: collie terrier silky Labrador saluki
Remove front -- Queue contents: terrier silky Labrador saluki
Remove front -- Queue contents: silky Labrador saluki
Remove front -- Queue contents: Labrador saluki
Remove front -- Queue contents: saluki
Remove front -- Queue contents:
Queue q2 empty? Yes
Attempt to read front value of q2:
Error: Queue is empty! nothing to retrieve.
Front value in q2: <nullptr>
Trying to remove front of q2:
Error: Queue is empty! cannot remove from queue.
Contents of queue q3 (via print):
otterhound Saint Rottweiler retriever Maltese spaniel Russell basset pointer
Samoyed fox Rottweiler
Contents of queue q3 after q3 = q1 (via print):
border Tibetan black collie terrier silky Labrador saluki
 */
