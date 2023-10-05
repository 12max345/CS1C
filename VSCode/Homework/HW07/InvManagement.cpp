#include "InvManagement.h"

InvManagement::InvManagement()
{
    itemName = "";
    itemCost = 0.0;
    itemQuantity = 0;
}

InvManagement::InvManagement(string name, double cost, int quantity) : itemName{name}, itemCost{cost}, itemQuantity{quantity} {}

InvManagement::~InvManagement() {}