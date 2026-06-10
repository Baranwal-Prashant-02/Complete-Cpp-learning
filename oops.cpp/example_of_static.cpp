#include<iostream>
using namespace std;

// ======================================
// CLASS : College
// ======================================
// A class is a blueprint/template used to create objects.
//
// OOP Concepts Used:
// 1. Class
// 2. Object
// 3. Data Members
// 4. Member Functions
// 5. Access Specifiers (private/public)
// 6. Encapsulation
// 7. Static Data Members
// ======================================

class College
{
private:

    // ======================================
    // PRIVATE DATA MEMBERS
    // ======================================
    // These variables cannot be accessed
    // directly from outside the class.
    //
    // This is called DATA HIDING and is a
    // part of ENCAPSULATION.
    // ======================================

    int eid;        // Employee ID
    int sid;        // Student ID

    string ename;   // Employee Name
    string sname;   // Student Name

    // ======================================
    // STATIC DATA MEMBERS
    // ======================================
    // Only ONE COPY exists for the entire class.
    //
    // Shared by all objects.
    //
    // Memory is allocated separately from
    // objects in static memory area.
    // ======================================

    static string cname;      // College Name
    static int cestd_yr;      // Establishment Year

public:

    // ======================================
    // MEMBER FUNCTION
    // ======================================
    // Used to input student details.
    //
    // Non-static member function:
    // - Belongs to object
    // - Has 'this' pointer
    // - Can access all data members
    // ======================================

    void sset()
    {
        cout<<"Enter Student ID : ";
        cin>>sid;

        cout<<"Enter Student Name : ";
        cin>>sname;
    }

    // ======================================
    // MEMBER FUNCTION
    // ======================================
    // Used to input employee details.
    // ======================================

    void eset()
    {
        cout<<"Enter Employee ID : ";
        cin>>eid;

        cout<<"Enter Employee Name : ";
        cin>>ename;
    }

    // ======================================
    // MEMBER FUNCTION
    // ======================================
    // Displays student details.
    //
    // Accessing:
    // - Non-static members (sid, sname)
    // - Static members (cname, cestd_yr)
    // ======================================

    void sget()
    {
        cout<<"\n----- Student Details -----\n";

        cout<<"Student ID : "<<sid<<endl;
        cout<<"Student Name : "<<sname<<endl;

        cout<<"College Name : "<<cname<<endl;
        cout<<"Established Year : "<<cestd_yr<<endl;
    }

    // ======================================
    // MEMBER FUNCTION
    // ======================================
    // Displays employee details.
    // ======================================

    void eget()
    {
        cout<<"\n----- Employee Details -----\n";

        cout<<"Employee ID : "<<eid<<endl;
        cout<<"Employee Name : "<<ename<<endl;

        cout<<"College Name : "<<cname<<endl;
        cout<<"Established Year : "<<cestd_yr<<endl;
    }
};

// ======================================
// STATIC DATA MEMBER DEFINITIONS
// ======================================
//
// Inside class:
//      static string cname;
//      static int cestd_yr;
//
// Only declaration happens there.
//
// Actual memory allocation happens here.
// ======================================

string College::cname = "MPGI";

int College::cestd_yr = 1995;

// ======================================
// MAIN FUNCTION
// ======================================

int main()
{
    // ==================================
    // OBJECT CREATION
    // ==================================
    //
    // Object is an instance of a class.
    //
    // Memory allocated for:
    // eid
    // sid
    // ename
    // sname
    //
    // Static members are NOT allocated
    // inside the object.
    // ==================================

    College obj;

    // Input Employee Details
    obj.eset();

    // Input Student Details
    obj.sset();

    // Display Employee Details
    obj.eget();

    // Display Student Details
    obj.sget();

    return 0;
}

/*
=================================================
MEMORY REPRESENTATION
=================================================

Suppose Input:

Employee ID   : 101
Employee Name : Rahul

Student ID    : 201
Student Name  : Aman


OBJECT MEMORY
---------------------------------

obj
|
|-- eid   = 101
|-- ename = Rahul
|
|-- sid   = 201
|-- sname = Aman

---------------------------------


STATIC MEMORY AREA
---------------------------------

cname     = MPGI
cestd_yr  = 1995

---------------------------------


Only ONE copy of static members exists.

=================================================
ENCAPSULATION
=================================================

Data + Functions are wrapped together
inside a class.

Example:

private:
    eid
    sid
    ename
    sname

public:
    eset()
    sset()
    eget()
    sget()

This is called Encapsulation.


=================================================
DATA HIDING
=================================================

Because variables are private,
outside code cannot do:

obj.eid = 10;     // ERROR
obj.sid = 20;     // ERROR

Data can only be accessed using
public functions.


=================================================
STATIC MEMBER CONCEPT
=================================================

Without static:

Object1 -> cname = MPGI
Object2 -> cname = MPGI
Object3 -> cname = MPGI

3 copies created.


With static:

Shared Memory

cname = MPGI

Only 1 copy created.


=================================================
INTERVIEW QUESTIONS
=================================================

Q1. Why use static variables?

Ans:
To share common data among all objects
and save memory.


Q2. Can private members be accessed
outside the class?

Ans:
No.


Q3. What is Encapsulation?

Ans:
Binding data and functions together
inside a class.


Q4. Why are cname and cestd_yr static?

Ans:
Because every student and employee
belongs to the same college and shares
the same establishment year.


Q5. Where is memory allocated for
static members?

Ans:
Outside the object, in static memory area.


=================================================
FILE NAME
=================================================

09_static_data_member_college.cpp

or

college_static_member_demo.cpp

=================================================
*/


// output
// Enter Employee ID : 345
// Enter Employee Name : suruchi
// Enter Student ID : 5656  
// Enter Student Name : prashant

// ----- Employee Details -----
// Employee ID : 345
// Employee Name : suruchi
// College Name : MPGI
// Established Year : 1995

// ----- Student Details -----
// Student ID : 5656
// Student Name : prashant
// College Name : MPGI
// Established Year : 1995