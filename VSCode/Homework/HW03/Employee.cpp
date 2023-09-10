#include "Employee.h"

Date::Date() {
    formatDate();
}

Date::Date(int m, int d, int y)
{
    
}

Date::~Date() {}

void Date::formatDate()
{

}

Employee::Employee()
{
    name = "";
    id = 0;
    phoneNum = 0;
    age = 0;
    gender = ' ';
    title = "";
    salary = 0;
    hireDate = 0;
}

Employee::Employee(string name, int id, int phoneNum, int age, char gender, string title, int salary, int hireDate)
{
    
}

Employee::~Employee() {}
