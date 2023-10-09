/*********************************************************
 * AUTHOR : Aden Malikyar
 * Assignment #7: Pointers & Dynamic Arrays
 * CLASS : CS1C
 * SECTION : TTH: 1:30p - 3:50p
 * Due Date : 10/5/23
 *********************************************************/

// g++ -g -o hw07 hw07.cpp ManageInventory.h ManageInventory.cpp

#include "ManageInventory.h"

int main()
{
    ManageInventory newInv(2);
    newInv.addItem("Nike", 10, 11.99);
    newInv.addItem("Spice", 5, 2.99);

    newInv.print();

    return 0;
};