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
    ManageInventory();
    ManageInventory(int size);
    ~ManageInventory();
    void addItem(string name, float cost, int quantity);
    void print() const;
};