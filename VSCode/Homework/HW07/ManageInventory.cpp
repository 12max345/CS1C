#include "ManageInventory.hpp"

ManageInventory::ManageInventory() : size{MAX_SIZE}, count{0}, p_pInventoryItems{new Item *[size]} {}

ManageInventory::ManageInventory(int size) : size{size}, count{0}, p_pInventoryItems{new Item *[size]} {}

ManageInventory::ManageInventory(const ManageInventory& cpy)
{
    size = cpy.size;
    count = cpy.count;

    p_pInventoryItems = new Item*[cpy.size];
    for (int i = 0; i < cpy.count; ++i)
    {
        p_pInventoryItems[i] = new Item{cpy.p_pInventoryItems[i]->name, cpy.p_pInventoryItems[i]->cost, cpy.p_pInventoryItems[i]->quantity};
    }
}

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

void ManageInventory::purchaseItem(string name, int quantity)
{
    for (int i = 0; i < count; i++)
    {
        if (p_pInventoryItems[i]->name == name)
        {
            p_pInventoryItems[i]->quantity -= quantity;
            preTax += p_pInventoryItems[i]->cost;
        }
    }
}

void ManageInventory::print() const
{
    for (int i = 0; i < count; i++)
    {
        cout << "Name: " << p_pInventoryItems[i]->name << endl
             << "Cost: $" << p_pInventoryItems[i]->cost << endl
             << "Quantity: " << p_pInventoryItems[i]->quantity << endl
             << endl;
    }
}

void ManageInventory::pReceipt()
{
    float temp;
    temp = preTax * 0.0825;
    postTax = preTax + temp;
    cout.precision(2);
    cout << fixed;
    cout << "Subtotal: $" << preTax << endl;
    cout << "Tax: $" << temp << endl;
    cout << "Total: $" << postTax << endl;
}