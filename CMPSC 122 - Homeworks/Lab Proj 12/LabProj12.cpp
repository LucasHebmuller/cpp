#include <iostream>
#include <fstream>
#include <string>
using namespace std;


struct TreeNode
{
    string word;
    int count;
    TreeNode * left;
    TreeNode * right;
};


void Insert(TreeNode* &, string);
void PrintTree(TreeNode*, ofstream &);


int main()
{
    TreeNode root = new TreeNode;
    TreeNode word;
    string originalFile;

    cout << "Please type the text file name:";
    getline(cin, originalFile);

    ifstream myFile(originalFile.data());

    myFile.open(originalFile);
    if (!myFile)
    {
        cerr << "Cannot open " << originalFile << endl;
        exit(1);
    }

    cout << endl;


    Insert(root, word);


    char any;
    cout << "You are done! You can open the file \"index.txt\" to check." << endl;
    cout << "Press any key to continue" << endl;
    cin >> any;


    return 0;
}


void Insert(TreeNode* & root, string word)
{
    if ( word.length() < 3 )
        return;

    if ( word < root->word)
    {
        if ( root->left == nullptr )
            root->left = new TreeNode;
        else
            Insert(root->left, word);
    }
    else
    {
        if ( root->right == nullptr )
            root->right = new TreeNode;
        else
            Insert(root->right, word);
    }

}


void PrintTree(TreeNode* root, ofstream & file)
{
    while ( root != nullptr )
    {
        outfile << root;
        PrintTree(root->left, file);
        PrintTree(root->right, file);
    }
}


/*
EXECUTION SAMPLE:
Please type the text file name: Lincoln.txt
Please give the output text file name: index2.txt
You are done! You can open the file "index2.txt" to check.
Press any key to continue k
 */
