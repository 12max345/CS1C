/*********************************************************
 * AUTHOR : Aden Malikyar
 * Assignment #1: Random Numbers
 * CLASS : CS1C
 * SECTION : TTH: 1:30p - 3:50p
 * Due Date : 8/29/23
 *********************************************************/

// g++ -g -o Source Source.cpp RandomNumbers.cpp RandomNumbers.h  

#include "RandomNumbers.h"

int main()
{
    srand((unsigned)time(NULL));

    RandomNumbers numOp;
    int selection;
    do
    {
        cout << "Random Number: " << numOp.getRandNum() << endl
             << "Please choose an operation\n"
             << "1. Sum the digits\n"
             << "2. Triple the number\n"
             << "3. Reverse the digits\n";
        cin >> selection;
    } while (selection != 1 && selection != 2 && selection != 3);

    cin.ignore(1000, '\n');

    if (selection == 1)
    {
        cout << "Digits summed: " << numOp.digitsSum();
    }
    else if (selection == 2)
    {
        cout << "Number tripled: " << numOp.numTriple();
    }
    else
    {
        cout << "Digits reversed: " << numOp.digitsReverse();
    };

    cout << endl
         << endl;

    RandomNumbers arrayNum;
    int randArray[10];

    cout << "Array of 10 random numbers:\n";
    for (int i = 0; i < 10; i++)
    {
        randArray[i] = arrayNum.getRandNum();
        cout << randArray[i] << " ";
        arrayNum.randomize();
    }
    cout << endl
         << endl;

    cout << "Sorted from low to high:\n";
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (randArray[i] > randArray[j])
            {
                int temp = randArray[i];
                randArray[i] = randArray[j];
                randArray[j] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << randArray[i] << " ";
    }
    cout << endl
         << endl;

    fstream file;
    file.open("RandomNumbersArray.txt", ios_base::in | ios_base::out);
    if (file.is_open())
    {
        cout << "RandomNumbersArray.txt opened successfully" << endl << endl;
    }
    else
    {
        cout << "RandomNumbersArray.txt failed to open" << endl;
        return 1;
    }

    for (int i = 0; i < 10; i++)
    {
        file << randArray[i] << " ";
    }

    file.close();
    if(file.is_open())
    {
        cout << "File was not closed" << endl;
        return 1;
    }
    cout << "File written" << endl << endl;

    cout << "File data:\n";
    arrayNum.printFile(file, randArray);

    return 0;
};