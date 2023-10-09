#include "ManageInventory.h"

ManageInventory::ManageInventory() : count{0}, pInventoryItems{pInventoryItems[size]} {}

ManageInventory::ManageInventory(int size) : size{size}, count{0}, pInventoryItems{ *Item *[size]} {}

ManageInventory::~ManageInventory()
{
    delete[] pInventoryItems;
}

void ManageInventory::addItem(string name, float cost, int quantity)
{
    Item inventoryItems[size];
    (*pInventoryItems)[count].name = name;
    (*pInventoryItems)[count].cost = cost;
    (*pInventoryItems)[count].quantity = quantity;
    count++;
}

void ManageInventory::print() const
{
    cout << size;
    cout << "Test Name: " << pInventoryItems[0]->name;
    for (int i = 0; i < size; i++)
    {
        cout << "Item Name: " << pInventoryItems[i]->name << endl
             << "Item Cost: " << pInventoryItems[i]->cost << endl
             << "Item Quantity: " << pInventoryItems[i]->quantity << endl
             << endl;
    }
}