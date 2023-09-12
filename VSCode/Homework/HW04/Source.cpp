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
    // creates all class objects with default constructors
    Employee baseEmployee;
    Programmer baseProgrammer;
    SoftwareArchitect baseSoftwareArchitect;

    // overloaded objects of Employee class
    Employee jimmyFallon("Jimmy Fallon", 12345, "949-555-1234", 40, 'M', "Comedian", 100000, {8, 31, 2014});
    Employee stephenColbert("Stephen Colbert", 12346, "310-555-5555", 51, 'M', "Comedian", 70123, {5, 8, 2015});
    Employee jamesCorden("James Corden", 87654, "703-703-1234", 37, 'M', "Talk Show Host", 900000, {12, 25, 2014});
    Employee katieCouric("Katie Couric", 77777, "203-555-6789", 58, 'F', "News Reporter", 500500, {3, 1, 2005});

    // overloaded objects of Programmer class
    Programmer samSoftware("Sam Software", 54321, "819-123-4567", 21, 'M', "Programmer", 223000, {12, 24, 2011}, 5432122, "Joe Boss", 4, true, false);
    Programmer maryCoder("Mary Coder", 65432, "310-555-5555", 28, 'F', "Programmer", 770123, {2, 8, 2010}, 6543222, "Mary Leader", 7, true, true);

    // overloaded objects of SoftwareArchitect class
    SoftwareArchitect alexArch("Alex Arch", 88888, "819-123-4444", 31, 'M', "Architect", 323000, {12, 24, 2009}, 5434222, "Big Boss", 5, 4);
    SoftwareArchitect sallyDesigner("Sally Designer", 87878, "310-555-8888", 38, 'F', "Architect", 870123, {2, 8, 2003}, 6543422, "Big Boss", 8, 11);

    // compares the phone numbers of an Employee and a Programmer
    comparePhoneNums(jimmyFallon, samSoftware);
    
    // alters the phone number of Programmer to match Employee
    samSoftware.setPhoneNum("949-555-1234");

    // checks again to see if phone numbers are equal
    comparePhoneNums(jimmyFallon, samSoftware);

    // equality operator checks both phone numbers for class and returns true or false
    if(jimmyFallon == samSoftware)
    {
        cout << "These phone numbers are equal." << endl;
    } else {
        cout << "These phone numbers are not equal." << endl;
    }

    // alters the phone number again of Programmer to no longer match Employee
    samSoftware.setPhoneNum("819-123-4567");

    // equality operator again checking for false
    if(jimmyFallon == samSoftware)
    {
        cout << "These phone numbers are equal." << endl;
    } else {
        cout << "These phone numbers are not equal." << endl;
    }
    cout << endl;

    // uses an int to increase the age of an Employee and outputs how much was added alongside the new age
    stephenColbert.addAge(5);

    // adds to age with operator+
    stephenColbert + 2;

    // prints all of an Employee to prove that age was modified
    stephenColbert.printAll();
    cout << endl;
    
    return 0;
};