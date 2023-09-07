#include <iostream>

using namespace std;

class Employee
{
private:
    string name;
    int id;
    int phoneNum;
    int age;
    char gender;
    string title;
    int salary;
    int hireDate;

public:
    Employee();
    Employee(string name, int id, int phoneNum, int age, char gender, string title, int salary, int hireDate);
    ~Employee();
};

class Programmer : public Employee
{
private:

public:

};

class SoftwareArchitect : public Employee
{
private:

public:

};