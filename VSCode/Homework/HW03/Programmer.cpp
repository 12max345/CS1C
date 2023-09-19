#include "Programmer.h"

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