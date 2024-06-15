/*--TextEditor.h-----------------------------------------------------------
  This header file defines the data type TextEditor for editing text files.
 -------------------------------------------------------------------------*/

#ifndef TEXTEDITOR_H
#define TEXTEDITOR_H

#include <iostream>
#include <string>
#include <fstream>

class TextEditor
{
    public:
        TextEditor(string inputFile, string outputFile); // Construct a text editor for files named
                                                         // inputFile and outputFile.
        void run(); // Run the editor.
        void showMenu(); // Display menu of editing commands.
        void insert(string str1, string str2); // Insert a string into a line of text.
        void erase(string str); // Remove a string from a line of text.
        void replace(string str1, string str2); // Replace one string with another in a line of text.
        void next(); // Move on to next line of text to edit.
        void quit(); // Quit editing.
    private:
        ifstream myInstream;
        ofstream myOutstream;
        string myLine;
};

#endif //TEXTEDITOR_H
