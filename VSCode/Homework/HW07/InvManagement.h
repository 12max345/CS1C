#pragma once
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// InvManagement class which is the base class
class InvManagement
{
private:
    string itemName;
    double itemCost;
    int itemQuantity;

public:
    InvManagement();
    InvManagement(string name, double cost, int quantity);
    ~InvManagement();
    void print();
};