#include "ManageInventory.hpp"

ManageInventory::ManageInventory() : count{0}, inventoryItems{new Item[*size]}
{
    *size = MAX_SIZE;
}

ManageInventory::ManageInventory(int size) : size{&size}, count{0}, inventoryItems{new Item[size]} {}

ManageInventory::~ManageInventory()
{
    delete[] inventoryItems;
}

void ManageInventory::addItem(string name, float cost, int quantity)
{
    *inventoryItems[0].name = name;
    *inventoryItems[0].cost = cost;
    *inventoryItems[0].quantity = quantity;
    // count++;
}

void ManageInventory::print() const
{
    cout << "Size: " << *size << endl;
    // cout << "Test Name: " << inventoryItems[0].name << endl;
    // for (int i = 0; i < *size; i++)
    // {
    //     cout << "Item Name: " << *inventoryItems[i].name << endl
    //          << "Item Cost: " << *inventoryItems[i].cost << endl
    //          << "Item Quantity: " << *inventoryItems[i].quantity << endl
    //          << endl;
    // }
}