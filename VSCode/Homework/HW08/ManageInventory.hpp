#pragma once
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Item
{
    string *name;
    float *cost;
    int *quantity;
};

const int MAX_SIZE = 50;

// ManageInventory class which is the base class
class ManageInventory
{
private:
    int *size;
    int *count;
    Item *inventoryItems;

public:
    ManageInventory();
    ManageInventory(int size);
    ~ManageInventory();
    void addItem(string name, float cost, int quantity);
    void print() const;
};