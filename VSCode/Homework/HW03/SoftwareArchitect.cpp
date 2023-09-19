#include "SoftwareArchitect.h"

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

void SoftwareArchitect::printAll()const
{
    Employee::printAll();
    cout << "Department: " << depNum << endl
         << "Supervisor's Name: " << supName << endl
         << "Raise %: " << salIncrease << endl
         << "Years of Experience: " << yearsOfExp << endl;
}