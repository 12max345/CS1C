#include "ManageInventory.h"

ManageInventory::ManageInventory() {}

ManageInventory::ManageInventory(int size) {}

ManageInventory::~ManageInventory()
{
    delete[] p_pInventoryItems;
}

void ManageInventory::addItem(string name, int quantity, float cost)
{
    Item *temp = new Item[count];
}

void ManageInventory::print()
{
    
}