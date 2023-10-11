/*********************************************************
 * AUTHOR : Aden Malikyar
 * Assignment #7: Pointers & Dynamic Arrays
 * CLASS : CS1C
 * SECTION : TTH: 1:30p - 3:50p
 * Due Date : 10/5/23
 *********************************************************/

// g++ -g -o hw07 hw07.cpp ManageInventory.hpp ManageInventory.cpp

#include "ManageInventory.hpp"

int main()
{
    ManageInventory newInv(2);
    newInv.addItem("Nike", 12.99, 10);
    newInv.addItem("Spice", 2.99, 5);

    newInv.print();

    return 0;
};