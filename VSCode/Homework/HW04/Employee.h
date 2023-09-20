#pragma once
#include <iomanip>
#include <string>
#include "Date.h"

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
    void addAge(int add);
    
    This method will add whatever int is passed through it. It will also display how many years have been added.

    Pre-Condition
        An int must be provided to add.

    Post-Condition
        Age will have added the int and print out how many years were added.

    */

    void addAge(int add);

    /* METHOD
    friend void comparePhoneNums(Employee emp1, Employee emp2);

    This method will take the phone of two employees and output a response baded on the result.

    Pre-Condition
        Two employees will be provided.

    Post-Condition
        The employees are compared and screen prints out result of equality.

    */

    friend void comparePhoneNums(Employee emp1, Employee emp2);

    /* METHOD
    friend bool operator==(Employee emp1, Employee emp2);

    This method will overload the == to allow comparing the phone number of employees.

    Pre-Condition
        Two employees will be given.
    
    Post-Condition
        The method will produce an output based on the comparison.
    
    */

    friend bool operator==(Employee emp1, Employee emp2);

    /* METHOD
    friend int operator+(Employee &emp, int add);

    This method will overload the + operator to permit addition of the age inside employees.

    Pre-Condition
        An employee and amount requested to add.

    Post-Condition
        The age of employee is modified and then a message is outputted with the increase.
    
    */

    friend int operator+(Employee &emp, int add);

    /* METHOD
    friend istream &operator>>(istream &screen, Employee &newEmp);

    This method will overload the >> operator to allow inserting a new employee.

    Pre-Condition
        A user needs to be prepared to add all inputs.

    Post-Condition
        New employee object will now be altered with user inputs.
    
    */

    friend istream &operator>>(istream &screen, Employee &newEmp);

    /* METHOD
    friend ostream &operator<<(ostream &screen, Employee emp);

    This method will overload the << operator so that an Employee can be displayed.

    Pre-Condition
        A user has to use the employee they want displayed

    Post-Condition
        The employee and their data members will be outputted to the screen.
    
    */

    friend ostream &operator<<(ostream &screen, Employee emp);

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