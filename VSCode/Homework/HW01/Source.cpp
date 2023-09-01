/*********************************************************
 * AUTHOR : Aden Malikyar
 * Assignment #1: Random Numbers
 * CLASS : CS1C
 * SECTION : TTH: 1:30p - 3:50p
 * Due Date : 8/29/23
 *********************************************************/

// g++ -g -o Source Source.cpp RandomNumbers.cpp RandomNumbers.h

#include "RandomNumbers.h"

enum choice {ONE, TWO, THREE};
typedef RandomNumbers rn;

int main()
{
    // seed for random number generation
    srand((unsigned)time(NULL));

    // creates an object of RandomNumbers
    RandomNumbers numOp;

    // displays randomly generated number and asks user which operation they request
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

    // checks which selection the user made and outputs result of RandomNumbers function
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

    // new object of RandomNumbers for array
    RandomNumbers arrayNum;
    // creates an array with 10 elements
    int randArray[10];

    // fills array with a random 3 digit number for each element and displays it
    cout << "Array of 10 random numbers:\n";
    for (int i = 0; i < 10; i++)
    {
        randArray[i] = arrayNum.getRandNum();
        cout << randArray[i] << " ";
        arrayNum.randomize();
    }
    cout << endl
         << endl;

    // takes the array, sorts the values from lowest to highest
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
    // displays sorted array
    for (int i = 0; i < 10; i++)
    {
        cout << randArray[i] << " ";
    }
    cout << endl
         << endl;

    // new fstream named "file"
    fstream file;
    // opens the stream with inputs and outputs
    file.open("RandomNumbersArray.txt", ios_base::in | ios_base::out);
    // checks if the file is opened properly and informs the user
    if (file.is_open())
    {
        cout << "RandomNumbersArray.txt opened successfully" << endl
             << endl;
    }
    else
    {
        cout << "RandomNumbersArray.txt failed to open" << endl;
        // exits the program if file fails to open
        return 1;
    }

    // fills the file with each element of the array
    arrayNum.writeFile(file, randArray);

    // file will read elements into a new array
    int newRandArray[10];
    arrayNum.readFile(file, newRandArray);

    // attempts to close the file and informs the user on the status
    file.close();
    if (file.is_open())
    {
        cout << "File was not closed" << endl;
        // exits the program if file fails to close
        return 1;
    }
    cout << "File written" << endl
         << endl;

    // displays the file data using the printFile function
    cout << "File data:\n";
    arrayNum.printFile(newRandArray);

    return 0;
};