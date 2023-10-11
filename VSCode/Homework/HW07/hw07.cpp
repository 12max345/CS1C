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
    ManageInventory startInv(5);
    startInv.addItem("Nike Basketball Shoes", 145.99, 22);
    startInv.addItem("Under Armor T-Shirt", 29.99, 33);
    startInv.addItem("Brooks Running Shoes", 111.44, 11);
    startInv.addItem("Asics Running Shoes", 165.88, 20);
    startInv.addItem("Nike Shorts", 45.77, 77);
    startInv.print();

    cout << "---------------------------------------" << endl;
    ManageInventory newInv(startInv);

    newInv.purchaseItem("Nike Basketball Shoes", 2);
    newInv.print();
    cout << "---------------------------------------" << endl;
    startInv.print();

    return 0;
};