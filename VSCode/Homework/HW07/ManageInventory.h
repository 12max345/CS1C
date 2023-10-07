#pragma once
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Item
{
    string name;
    float cost;
    int quantity;
};

const int MAX_SIZE = 50;

// ManageInventory class which is the base class
class ManageInventory
{
private:
    int size{MAX_SIZE};
    int count;
    Item **p_pInventoryItems;

public:
    ManageInventory() : count{0}, p_pInventoryItems{new Item *[size]} {};
    ManageInventory(int size) : size{size}, count{0}, p_pInventoryItems{new Item *[size]} {};
    ~ManageInventory();
    void addItem(string name, int quantity, float cost);
    void print();
};