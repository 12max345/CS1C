#include "Employee.h"

Date::Date()
{
    month = 0;
    day = 0;
    year = 0;
}

Date::Date(int m, int d, int y) : month{m}, day{d}, year{y}
{
}

Date::~Date() {}

void Date::printFormatDate()
{
    cout << month << "/" << day << "/" << year;
}

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

void Employee::printAll()
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

Programmer::Programmer()
{
    depNum = 0;
    supName = "";
    salIncrease = 0;
    knowsCPP = false;
    knowsJava = false;
}

Programmer::Programmer(string name, int id, string phoneNum, int age, char gender, string title, int salary, Date hireDate,
                       int depNum, string supName, int salIncrease, bool knowsCPP, bool knowsJava)
    : Employee{name, id, phoneNum, age, gender, title, salary, hireDate},
      depNum{depNum}, supName{supName}, salIncrease{salIncrease}, knowsCPP{knowsCPP}, knowsJava{knowsJava}
{
}

Programmer::~Programmer() {}

void Programmer::setDepNum(int depNum)
{
    this->depNum = depNum;
}

void Programmer::setSupName(string supName)
{
    this->supName = supName;
}

void Programmer::setSalIncrease(int salIncrease)
{
    this->salIncrease = salIncrease;
}

void Programmer::setKnowsCPP(bool knowsCPP)
{
    this->knowsCPP = knowsCPP;
}

void Programmer::setKnowsJava(bool knowsJava)
{
    this->knowsJava = knowsJava;
}

void Programmer::printAll()
{
    string cpp;
    string java;

    if (knowsCPP)
    {
        cpp = "Yes";
    }
    else
    {
        cpp = "No";
    }

    if (knowsJava)
    {
        java = "Yes";
    }
    else
    {
        java = "No";
    }

    Employee::printAll();
    cout << "Department: " << depNum << endl
         << "Supervisor's Name: " << supName << endl
         << "Raise %: " << salIncrease << endl
         << "C++ Knowledge: " << cpp << endl
         << "Java Knowledge: " << java << endl;
}

SoftwareArchitect::SoftwareArchitect()
{
    depNum = 0;
    supName = "";
    salIncrease = 0;
    yearsOfExp = 0;
}

SoftwareArchitect::SoftwareArchitect(string name, int id, string phoneNum, int age, char gender, string title, int salary, Date hireDate,
                                     int depNum, string supName, int salIncrease, int yearsOfExp)
    : Employee{name, id, phoneNum, age, gender, title, salary, hireDate},
      depNum{depNum}, supName{supName}, salIncrease{salIncrease}, yearsOfExp{yearsOfExp}
{
}

SoftwareArchitect::~SoftwareArchitect() {}

void SoftwareArchitect::setDepNum(int depNum)
{
    this->depNum = depNum;
}

void SoftwareArchitect::setSupName(string supName)
{
    this->supName = supName;
}

void SoftwareArchitect::setSalIncrease(int salIncrease)
{
    this->salIncrease = salIncrease;
}

void SoftwareArchitect::setYearsOfExp(int yearsOfExp)
{
    this->yearsOfExp = yearsOfExp;
}

void SoftwareArchitect::printAll()
{
    Employee::printAll();
    cout << "Department: " << depNum << endl
         << "Supervisor's Name: " << supName << endl
         << "Raise %: " << salIncrease << endl
         << "Years of Experience: " << yearsOfExp << endl;
}