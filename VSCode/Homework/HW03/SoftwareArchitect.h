#pragma once
#include "Employee.h"

// SoftwareArchitect class derived from Employee
class SoftwareArchitect : public Employee
{
private:
    int depNum;
    string supName;
    int salIncrease;
    int yearsOfExp;

public:
    SoftwareArchitect();
    SoftwareArchitect(string name, int id, string phoneNum, int age, char gender, string title, int salary, Date hireDate,
                      int depNum, string supName, int salIncrease, int yearsOfExp);
    ~SoftwareArchitect();
    void setDepNum(int depNum);
    void setSupName(string supName);
    void setSalIncrease(int salIncrease);
    void setYearsOfExp(int yearsOfExp);
    void printAll();
};