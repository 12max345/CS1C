/*********************************************************
 * AUTHOR : Aden Malikyar
 * Assignment #4: Friend Functions & Operator Overloading
 * CLASS : CS1C
 * SECTION : TTH: 1:30p - 3:50p
 * Due Date : 9/14/23
 *********************************************************/

// g++ -g -o Source Source.cpp Employee.cpp Employee.h

#include "Employee.h"

int main()
{
    // overloaded objects of Employee class
    Employee jimmyFallon("Jimmy Fallon", 12345, "949-555-1234", 40, 'M', "Comedian", 100000, {8, 31, 2014});
    Employee stephenColbert("Stephen Colbert", 12346, "310-555-5555", 51, 'M', "Comedian", 70123, {5, 8, 2015});

    // overloaded objects of Programmer class
    Programmer samSoftware("Sam Software", 54321, "819-123-4567", 21, 'M', "Programmer", 223000, {12, 24, 2011}, 5432122, "Joe Boss", 4, true, false);

    // compares the phone numbers of an Employee and a Programmer
    cout << "False phone comparison of Jimmy and Sam using member function:" << endl;
    comparePhoneNums(jimmyFallon, samSoftware);
    cout << endl;

    // alters the phone number of Programmer to match Employee
    samSoftware.setPhoneNum("949-555-1234");

    // checks again to see if phone numbers are equal
    cout << "True phone comparison of Jimmy and Sam after edit:" << endl;
    comparePhoneNums(jimmyFallon, samSoftware);
    cout << endl;

    // equality operator checks both phone numbers for class and returns true or false
    cout << "True phone comparison of Jimmy and Sam using overloaded ==:" << endl;
    if (jimmyFallon == samSoftware)
    {
        cout << "These phone numbers are equal." << endl;
    }
    else
    {
        cout << "These phone numbers are not equal." << endl;
    }
    cout << endl;

    // alters the phone number again of Programmer to no longer match Employee
    samSoftware.setPhoneNum("819-123-4567");

    // equality operator again checking for false
    cout << "False phone comparison of Jimmy and Sam after edit:" << endl;
    if (jimmyFallon == samSoftware)
    {
        cout << "These phone numbers are equal." << endl;
    }
    else
    {
        cout << "These phone numbers are not equal." << endl;
    }
    cout << endl
         << endl;

    // uses an int to increase the age of an Employee and outputs how much was added alongside the new age
    stephenColbert.addAge(5);
    cout << endl;

    // adds to age with operator+
    stephenColbert + 2;
    cout << endl;

    // prints all of an Employee to prove that age was modified
    stephenColbert.printAll();
    cout << endl;

    // prints all of an Employee using an overloaded operator<<
    cout << stephenColbert;
    cout << endl;

    // creates a new default of Employee
    Employee joeyJon;

    // user uses overloaded operator>> in order to fill new Employee class with data
    cin >> joeyJon;

    // overloaded operator<< will print out the class data members
    cout << joeyJon;

    return 0;
};