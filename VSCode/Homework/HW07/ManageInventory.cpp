#include "ManageInventory.hpp"

ManageInventory::ManageInventory() : size{MAX_SIZE}, count{0}, p_pInventoryItems{new Item *[size]} {}

ManageInventory::ManageInventory(int size) : size{size}, count{0}, p_pInventoryItems{new Item *[size]} {}

ManageInventory::~ManageInventory()
{
    for (int i = 0; i < count; i++)
        delete p_pInventoryItems[i];
    delete[] p_pInventoryItems;
}

void ManageInventory::addItem(string name, float cost, int quantity)
{
    p_pInventoryItems[count++] = new Item{name, cost, quantity};
}

void ManageInventory::print() const
{
    for (int i = 0; i < size; i++)
    {
        cout << "Item Name: " << p_pInventoryItems[i]->name << endl
             << "Item Cost: " << p_pInventoryItems[i]->cost << endl
             << "Item Quantity: " << p_pInventoryItems[i]->quantity << endl
             << endl;
    }
}