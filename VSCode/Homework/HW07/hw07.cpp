/*********************************************************
 * AUTHOR : Aden Malikyar
 * Assignment #7: Pointers & Dynamic Arrays
 * CLASS : CS1C
 * SECTION : TTH: 1:30p - 3:50p
 * Due Date : 10/5/23
 *********************************************************/

// g++ -g -o hw07 hw07.cpp ManageInventory.hpp ManageInventory.cpp

#include "ManageInventory.hpp"

// main
int main()
{
    // creates a new ManageInventory obj with size of 5
    ManageInventory startInv(5);
    cout << "Item Inventory" << endl;

    // fills obj with various items and prints it
    startInv.addItem("Nike Basketball Shoes", 145.99, 22);
    startInv.addItem("Under Armor T-Shirt", 29.99, 33);
    startInv.addItem("Brooks Running Shoes", 111.44, 11);
    startInv.addItem("Asics Running Shoes", 165.88, 20);
    startInv.addItem("Nike Shorts", 45.77, 77);
    startInv.print();
    cout << "---------------------------------------" << endl;

    // creates a copy of the first obj to retain original
    ManageInventory newInv(startInv);

    // purchases several items from obj and prints result
    newInv.purchaseItem("Nike Basketball Shoes", 2);
    newInv.purchaseItem("Under Armor T-Shirt", 3);
    newInv.purchaseItem("Brooks Running Shoes", 1);
    newInv.purchaseItem("Nike Shorts", 4);
    newInv.print();
    cout << "---------------------------------------" << endl;

    // reprints original inventory
    cout << "Original Inventory" << endl;
    startInv.print();

    return 0;
};