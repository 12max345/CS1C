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

    /* METHODS
    void setDepNum(int depNum);
    void setSupName(string supName);
    void setSalIncrease(int salIncrease);
    void setYearsOfExp(int yearsOfExp);

    These methods are meant to alter a specific variable regarding the softwarearchitect object derived from employee.

    Pre-Condition
    A class variable which was constructed into an object not including employee base class.

    Post-Condition
    Will alter and replace that specific variable of the object within the derived softwarearchitect class.
    */

    void setDepNum(int depNum);
    void setSupName(string supName);
    void setSalIncrease(int salIncrease);
    void setYearsOfExp(int yearsOfExp);

    /* METHOD
    void printAll()const;

    This method will display the data of the object when called

    Pre-Condition

    */
    void printAll()const;
};