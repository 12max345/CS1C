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
    void setName(string name);
    void setId(int id);
    void setPhoneNum(string phoneNum);
    void setAge(int age);
    void setGender(char gender);
    void setTitle(string title);
    void setSalary(int salary);
    void setHireDate(Date hireDate);
    void printAll();
};