/*********************************************************
 * AUTHOR : Aden Malikyar
 * Assignment #6: Recursion
 * CLASS : CS1C
 * SECTION : TTH: 1:30p - 3:50p
 * Due Date : 9/26/23
 *********************************************************/

// This program will take a string and perform a reversal on a certain selection of its characters from 2 indices.

// g++ -g -o hw06 hw06.cpp

#include <iostream>
#include <string>

using namespace std;

/* METHOD
string indexReverse(string newString, int i1, int i2);

This method intends on taking in a user inputted string alongside two indices so that they can can be reversed from those two points.

Pre-Condition
    A string and two indices must be passed through.

Post-Condition
    The method will return a string that is reversed at the two points specified.

*/
string indexReverse(string newString, int i1, int i2);

int main()
{
    // declared variables
    string userString;
    int index1, index2;

    // prompts user the first time for a line and 3 different times for indices
    cout << "Please enter a new line: " << endl;
    getline(cin, userString);
    cout << endl
         << "Enter indices to reverse at" << endl;
    cout << "Index 1: ";
    cin >> index1;
    cout << "Index 2: ";
    cin >> index2;
    cout << endl;

    // displays the string reversed from indexReverse method
    cout << "String Reversed" << endl;
    cout << indexReverse(userString, index1, index2);

    cout << endl
         << endl
         << "Enter indices to reverse at" << endl;
    cout << "Index 1: ";
    cin >> index1;
    cout << "Index 2: ";
    cin >> index2;
    cout << endl;

    cout << "String Reversed" << endl;
    cout << indexReverse(userString, index1, index2);

    cout << endl
         << endl
         << "Enter indices to reverse at" << endl;
    cout << "Index 1: ";
    cin >> index1;
    cout << "Index 2: ";
    cin >> index2;
    cout << endl;

    cout << "String Reversed" << endl;
    cout << indexReverse(userString, index1, index2);

    return 0;
};

string indexReverse(string newString, int in1, int in2)
{
    // checks if the first index is meeting the second index
    if (in2 > in1)
    {
        swap(newString[in1], newString[in2]);
        return indexReverse(newString, in1 + 1, in2 - 1);
    }
    else
    {
        return newString;
    }
};