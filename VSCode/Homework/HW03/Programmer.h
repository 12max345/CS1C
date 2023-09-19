#pragma once
#include "Employee.h"

// Programmer class derived from Employee
class Programmer : public Employee
{
private:
    int depNum;
    string supName;
    int salIncrease;
    bool knowsCPP;
    bool knowsJava;

public:
    Programmer();
    Programmer(string name, int id, string phoneNum, int age, char gender, string title, int salary, Date hireDate,
               int depNum, string supName, int salIncrease, bool knowsCPP, bool knowsJava);
    ~Programmer();
    void setDepNum(int depNum);
    void setSupName(string supName);
    void setSalIncrease(int salIncrease);
    void setKnowsCPP(bool knowsCPP);
    void setKnowsJava(bool knowsJava);
    void printAll();
};