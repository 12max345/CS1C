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

string indexReverse(string newString, int i1, int i2);

int main()
{
    string userString;
    int index1, index2;

    cout << "Please enter a new line: " << endl;
    //getline(cin, userString);
    userString = "abcdefghijklmnopqrstuvwxyz";
    cout << endl;
    cout << endl << "Enter indices to reverse at" << endl;
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
    if(in2 > in1)
    {
        newString[in1] = newString[in2];
        return indexReverse(newString, in1, in2);
    } else {
        return newString;
    }
};