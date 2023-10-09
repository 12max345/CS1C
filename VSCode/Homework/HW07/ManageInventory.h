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
    const int *size{&MAX_SIZE};
    int *count;
    Item InventoryItems[];

public:
    ManageInventory();
    ManageInventory(int size);
    ~ManageInventory();
    void addItem(string name, float cost, int quantity);
    void print() const;
};