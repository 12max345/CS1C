/*********************************************************
 * AUTHOR : Aden Malikyar
 * Assignment #1: Random Numbers
 * CLASS : CS1C
 * SECTION : TTH: 1:30p - 3:50p
 * Due Date : 8/29/23
 *********************************************************/
#include "RandomNumbers.h"



int main()
{
    srand((unsigned)time(NULL));

    for (int i = 1; i <= 5; i++)
    {
        int randomNum = 100 + (rand() % 999);
        cout << randomNum << endl;
    }

    return 0;
};