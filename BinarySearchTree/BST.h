/*
    BST.h contains the declaration of class template BST.
 */

#include <iostream>
#include <iomanip> // graphAux
#include <new>
using namespace std;

#ifndef BST_H
#define BST_H

template <typename DataType>
class BST
{
public:
    BST();
    bool empty() const;
    bool search(const DataType & item) const;
    void insert(const DataType & item);
    void remove(const DataType & item);
    void inorder(ostream & out) const;
    void graph(ostream & out) const;

private:
    //Node class
    class BinNode
    {
    public:
        DataType data;
        BinNode * left;
        BinNode * right;

        BinNode()
        : left(0), right(0)
        {}

        BinNode(DataType item)
        : data(item), left(0), right(0)
        {}
    }; // end of class BinNode declaration

    typedef BinNode * BinNodePointer;

    // private function members
    void search2(const DataType & item, bool & found,
        BinNodePointer & locptr, BinNodePointer & parent) const;
    void inorderAux(ostream & out, BinNodePointer subtreePtr) const;
    void graphAux(ostream & out, int indent, BinNodePointer subtreeRoot) const;

    // data members
    BinNodePointer myRoot;
}; // end of class template declaration


// constructor
template <typename DataType>
inline BST<DataType>::BST()
: myRoot(0)
{}


// empty
template <typename DataType>
inline bool BST<DataType>::empty() const
{ return myRoot == 0; }


// search
template <typename DataType>
bool BST<DataType>::search(const DataType & item) const
{
    BST<DataType>::BinNodePointer locptr = myRoot;
    bool found = false;
    while (!found && locptr != 0) {
        if (item < locptr->data)
            locptr = locptr->left;
        else if (locptr->data > item)
            locptr = locptr->right;
        else
            found = true;
    }
    return found;
}


// insert
template <typename DataType>
void BST<DataType>::insert(const DataType & item)
{
    BST<DataType>::BinNodePointer locptr = myRoot,
                                  parent = 0; // parent of current node
    bool found = false;

    while (!found && locptr != 0) {
        parent = locptr;
        if (item < locptr->data)
            locptr = locptr->left;
        else if (item > locptr->data)
            locptr = locptr->right;
        else
            found = true;
    }

    if (!found) {
        locptr = new BST<DataType>::BinNode(item); // construct node containing item
        if (parent == 0)
            myRoot = locptr;
        else if (item < parent->data)
            parent->left = locptr;
        else
            parent->right = locptr;
    }
    else
        cout << "Item already in the tree." << endl;
}


// remove
template <typename DataType>
void BST<DataType>::remove(const DataType & item)
{
    bool found;
    BST<DataType>::BinNodePointer x,      // node to be deleted
                                  parent;
    search2(item, found, x, parent);

    if( !found) {
        cout << "Item not in the BST." << endl;
        return;
    }

    if (x->left != 0 && x->right != 0) { // node has two children
        // Find x's inorder successor and its parent
        BST<DataType>::BinNodePointer xSucc = x->right;
        parent = x;
        while (xSucc->left != 0) {
            parent = xSucc;
            xSucc = xSucc->left;
        }

        // Move contents of xSucc to x and change x to point to successor, which will be removed
        x->data = xSucc->data;
        x = xSucc;
    }

    // Now proceed with case where node has 0 or 1 child
    BST<DataType>::BinNodePointer subtree = x->left;
    if (subtree == 0)
        subtree = x->right;
    if (parent == 0)             // root being removed
        myRoot = subtree;
    else if (parent->left == x)  // left child of parent
        parent->left = subtree;
    else
        parent->right = subtree; // right child of parent
    delete x;
}


// inorder
template <typename DataType>
inline void BST<DataType>::inorder(ostream & out) const
{
    inorderAux(out, myRoot);
}


// graph
template <typename DataType>
inline void BST<DataType>::graph(ostream & out) const
{ graphAux(out, 0, myRoot); }


// search2
template <class DataType>
void BST<DataType>::search2(const DataType & item, bool & found,
    BST<DataType>::BinNodePointer & locptr,
    BST<DataType>::BinNodePointer & parent) const
{
    locptr = myRoot;
    parent = 0;
    found = false;
    while (!found && locptr != 0) {
        if (item < locptr->data) { // descend left
            parent = locptr;
            locptr = locptr->left;
        }
        else if (item > locptr->data) { // descend right
            parent = locptr;
            locptr = locptr->right;
        }
        else
            found = true;
    }
}


// inorderAux
template <typename DataType>
void BST<DataType>::inorderAux(ostream & out,
    BST<DataType>::BinNodePointer subtreeRoot) const
{
    if (subtreeRoot != 0) {
        inorderAux(out, subtreeRoot->left);  // L
        out << subtreeRoot->data << " ";        // V
        inorderAux(out, subtreeRoot->right); // R
    }
}


// graphAux
template <typename DataType>
void BST<DataType>::graphAux(ostream & out, int indent,
    BST<DataType>::BinNodePointer subtreeRoot) const
{
  if (subtreeRoot != 0) {
      graphAux(out, indent + 8, subtreeRoot->right);
      out << setw(indent) << " " << subtreeRoot->data << endl;
      graphAux(out, indent + 8, subtreeRoot->left);
  }
}

#endif //BST_H
