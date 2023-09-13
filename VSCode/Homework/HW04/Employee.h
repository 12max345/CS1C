#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Date class which includes ability to print a formatted date
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
    friend istream &operator>>(istream &screen, Date &newDate);
    void printFormatDate() const;
};

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
    void addAge(int add);
    friend void comparePhoneNums(Employee emp1, Employee emp2);
    friend bool operator==(Employee emp1, Employee emp2);
    friend int operator+(Employee &emp, int add);
    friend istream &operator>>(istream &screen, Employee &newEmp);
    friend ostream &operator<<(ostream &screen, Employee emp);
    void printAll() const;
};

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
    void printAll() const;
};