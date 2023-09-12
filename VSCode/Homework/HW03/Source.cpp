/*********************************************************
 * AUTHOR : Aden Malikyar
 * Assignment #3: Employee Inheritance
 * CLASS : CS1C
 * SECTION : TTH: 1:30p - 3:50p
 * Due Date : 9/7/23
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

    // prints out the default constructors for all 3 classes
    baseEmployee.printAll();
    cout << endl;
    baseProgrammer.printAll();
    cout << endl;
    baseSoftwareArchitect.printAll();
    cout << endl;

    // prints out the Employees
    jimmyFallon.printAll();
    cout << endl;
    stephenColbert.printAll();
    cout << endl;
    jamesCorden.printAll();
    cout << endl;
    katieCouric.printAll();
    cout << endl;

    // prints out the Programmers
    samSoftware.printAll();
    cout << endl;
    maryCoder.printAll();
    cout << endl;

    // prints out the SoftwareArchitects
    alexArch.printAll();
    cout << endl;
    sallyDesigner.printAll();
    cout << endl;

    // series of setter methods changing one member of each class
    jimmyFallon.setName("Jim Fallon");
    stephenColbert.setId(64321);
    jamesCorden.setAge(30);
    katieCouric.setGender('M');
    samSoftware.setHireDate({5, 10, 2000});
    maryCoder.setKnowsCPP(false);
    alexArch.setSalIncrease(1);
    sallyDesigner.setYearsOfExp(40);

    // prints out all classes after editing several data members 
    cout << "AFTER CHANGE" << endl;
    jimmyFallon.printAll();
    cout << endl;
    stephenColbert.printAll();
    cout << endl;
    jamesCorden.printAll();
    cout << endl;
    katieCouric.printAll();
    cout << endl;
    samSoftware.printAll();
    cout << endl;
    maryCoder.printAll();
    cout << endl;
    alexArch.printAll();
    cout << endl;
    sallyDesigner.printAll();
    cout << endl;

    return 0;
};