#include <iostream>

using namespace std;

class Date
{
    private:
    int month;
    int day;
    int year;

    public:
    Date();
    Date(int m, int d, int y);
    ~Date();
    void formatDate();

};
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
    string depName;
    string supName;
    int salIncrease;
    bool knowsCPP;
    bool knowsJava;

public:

};

class SoftwareArchitect : public Employee
{
private:
    string depName;
    string supName;
    int salIncrease;
    int yearsOfExp;

public:

};