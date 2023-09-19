#include "Employee.h"

Employee::Employee()
{
    name = "";
    id = 0;
    phoneNum = "";
    age = 0;
    gender = ' ';
    title = "";
    salary = 0;
    hireDate = {0, 0, 0};
}

Employee::Employee(string name, int id, string phoneNum, int age, char gender, string title, int salary, Date hireDate)
    : name{name}, id{id}, phoneNum{phoneNum}, age{age}, gender{gender}, title{title}, salary{salary}, hireDate{hireDate}
{
}

Employee::~Employee() {}

void Employee::setName(string name)
{
    this->name = name;
}

void Employee::setId(int id)
{
    this->id = id;
}

void Employee::setPhoneNum(string phoneNum)
{
    this->phoneNum = phoneNum;
}

void Employee::setAge(int age)
{
    this->age = age;
}

void Employee::setGender(char gender)
{
    this->gender = gender;
}

void Employee::setTitle(string title)
{
    this->title = title;
}

void Employee::setSalary(int salary)
{
    this->salary = salary;
}

void Employee::setHireDate(Date hireDate)
{
    this->hireDate = hireDate;
}

void Employee::printAll()const
{
    cout << "Name: " << name << endl
         << "Employee's ID: " << id << endl
         << "Phone: " << phoneNum << endl
         << "Age: " << age << endl
         << "Gender: " << gender << endl
         << "Job Title: " << title << endl
         << "Salary: $" << salary << endl
         << "Hire Date: ";
    hireDate.printFormatDate();
    cout << endl;
}