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

    /* METHODS
    void setDepNum(int depNum);
    void setSupName(string supName);
    void setSalIncrease(int salIncrease);
    void setKnowsCPP(bool knowsCPP);
    void setKnowsJava(bool knowsJava);

    These methods are meant to alter a specific variable regarding the programmer object derived from employee.

    Pre-Condition
    A class variable which was constructed into an object not including employee base class.

    Post-Condition
    Will alter and replace that specific variable of the object within the derived programmer class.
    */

    void setDepNum(int depNum);
    void setSupName(string supName);
    void setSalIncrease(int salIncrease);
    void setKnowsCPP(bool knowsCPP);
    void setKnowsJava(bool knowsJava);

    /* METHOD
    void printAll()const;

    This method will display the data/variables of the object when called.

    Pre-Condition
    Initialized object which method is being called from.

    Post-Condition
    Console output of all object variables.

    */

    void printAll()const;
};