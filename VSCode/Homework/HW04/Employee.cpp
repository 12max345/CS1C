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

void Employee::addAge(int add)
{
    this->age = this->age + add;
    cout << add << " years have been added to the age of " << this->name << ". They are now " << this->age << " years old." << endl;
}

void comparePhoneNums(Employee emp1, Employee emp2)
{
    if (emp1.phoneNum == emp2.phoneNum)
    {
        cout << "These phone numbers are equal." << endl;
    }
    else
    {
        cout << "These phone numbers are not equal." << endl;
    }
}

bool operator==(Employee emp1, Employee emp2)
{
    if (emp1.phoneNum == emp2.phoneNum)
        return true;
    return false;
}

int operator+(Employee &emp, int add)
{
    emp.age = emp.age + add;
    cout << add << " years have been added to the age of " << emp.name << ". They are now " << emp.age << " years old." << endl;
    return emp.age;
}

istream &operator>>(istream &screen, Employee &newEmp)
{
    cout << "Input employee's Name: ";
    getline(screen, newEmp.name);

    cout << "Input employee's ID: ";
    screen >> newEmp.id;
    screen.ignore(10000, '\n');

    cout << "Input employee's Phone Number: ";
    getline(screen, newEmp.phoneNum);

    cout << "Input employee's Age: ";
    screen >> newEmp.age;
    screen.ignore(10000, '\n');

    cout << "Input employee's Gender: ";
    screen >> newEmp.gender;
    screen.ignore(10000, '\n');

    cout << "Input employee's Job Title: ";
    getline(screen, newEmp.title);

    cout << "Input employee's Salary: $";
    screen >> newEmp.salary;
    screen.ignore(10000, '\n');

    cout << "Input employee's Hire Date" << endl;
    screen >> newEmp.hireDate;
    screen.ignore(10000, '\n');
    cout << endl;

    return screen;
}

ostream &operator<<(ostream &screen, Employee emp)
{
    screen << "Name: " << emp.name << endl
           << "Employee's ID: " << emp.id << endl
           << "Phone: " << emp.phoneNum << endl
           << "Age: " << emp.age << endl
           << "Gender: " << emp.gender << endl
           << "Job Title: " << emp.title << endl
           << "Salary: $" << emp.salary << endl
           << "Hire Date: ";
    emp.hireDate.printFormatDate();
    screen << endl;
    return screen;
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