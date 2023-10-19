// pre-proccessor directives
#pragma once
#include <iostream>
#include <string>

using namespace std;

// Struct that includes items traits
struct Item
{
    string name;
    float cost;
    int quantity;
};

// Global variable that sets maximum items to 50 if not specified
const int MAX_SIZE = 50;

// ManageInventory class which is the base class
class ManageInventory
{
private:
    int size;
    int count;
    Item **p_pInventoryItems;

public:
    // default constructor
    ManageInventory();

    // alt constructor
    ManageInventory(int size);

    // copy constructor
    ManageInventory(const ManageInventory &cpy);

    // deconstructor
    ~ManageInventory();

    /* METHOD
    void addItem(string name, float cost, int quantity);

    This method intends on adding an item to a dynamic array with 3 arguments.

    Pre-Condition
        A string, a float, and an int must be inputted.

    Post-Condition
        The method will add to an existing pointer array that can by dynamically allocated and deleted.
    */
    void addItem(string name, float cost, int quantity);

    /* METHOD
    void purchaseItem(string name, int quantity);

    This method intends on creating a purchase for a specified item from the array that is requested.

    Pre-Condition
        A string and an int must be inputted.

    Post-Condition
        The method will find the item requested and take away from its quantity.
    */
    void purchaseItem(string name, int quantity);

    // print method
    void print() const;

    // receipt print method
    void pReceipt() const;
};