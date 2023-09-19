#pragma once
#include "Date.h"
#include <string>

using namespace std;

// Employee class which is the base class
class Employee
{
private:
    string name;
    int id;
    string phoneNum;
    int age;
    char gender;
    string title;
    int salary;
    Date hireDate;

public:
    Employee();
    Employee(string name, int id, string phoneNum, int age, char gender, string title, int salary, Date hireDate);
    ~Employee();

    /* METHODS
    void setName(string name);
    void setId(int id);
    void setPhoneNum(string phoneNum);
    void setAge(int age);
    void setGender(char gender);
    void setTitle(string title);
    void setSalary(int salary);
    void setHireDate(Date hireDate);

    These methods are meant to alter a specific variable regarding the employee object.

    Pre-Condition
    A class variable which was constructed into an object.

    Post-Condition
    Will alter and replace that specific variable of the object.
    */

    void setName(string name);
    void setId(int id);
    void setPhoneNum(string phoneNum);
    void setAge(int age);
    void setGender(char gender);
    void setTitle(string title);
    void setSalary(int salary);
    void setHireDate(Date hireDate);
    
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