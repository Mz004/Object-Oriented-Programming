#pragma once
/***********************************************************************
// OOP244 Workshop #2 lab (part 1)
//
// File Employee.h
// Version 1.0
// Author   Fardad Soleimanloo
// Description
//    To be completed by students
// Revision History
// --------------------------------------------------------------------
// Name: Manav Alpeshbhai Zadafiya      Date 20th Sept       Reason
***********************************************************************/

#ifndef SDDS_EMPLOYEE_H_
#define SDDS_EMPLOYEE_H_
#define DATAFILE "employees.csv"


namespace sdds 
{
    struct Employee {
        char* m_name;
        int m_empNo;
        double m_salary;
    };
    //sorts the dynamic array of employees based on the GPA of the employees.
    void sort();

    // loads a employee structue with its values from the file
    bool load(Employee& employees);

    // allocates the dyanmic array of employees and loads all the file
    // recoreds into the array
    bool load();

    // TODO: Declare the prototype for the display function that 
    void display();

    // TODO: Declare the prototype for the display function that
    // displays a employee record on the screen:
    void Record(const Employee& employees);
    // first sorts the employees then displays all the employees on the screen

    // TODO: Declare the prototype for the deallocateMemory function that
    void deallocateMemory();
    // first will deallocate all the names in the employee elements
    // then it will deallocate the employee array 
    void Header();
}
#endif // SDDS_EMPLOYEE_H_