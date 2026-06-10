#include <iostream>
using namespace std;

/*
===============================================================================
PROGRAM: Access Specifiers in C++
===============================================================================

ACCESS SPECIFIERS:
------------------
1. private
2. protected
3. public

Purpose:
--------
They control who can access data members and member functions.

===============================================================================
*/

class logic
{

/*
===============================================================================
PRIVATE SECTION
===============================================================================

Private members:
----------------
✔ Accessible inside the same class

❌ Cannot be accessed directly from main()
❌ Cannot be accessed through object
❌ Cannot be accessed by other classes

This is the highest level of data hiding.
===============================================================================
*/
private:

    // Private data member
    int a;

    // Private member function
    void pvt()
    {
        cout << "This is private method. Value of a = " << a << endl;
    }



/*
===============================================================================
PROTECTED SECTION
===============================================================================

Protected members:
------------------
✔ Accessible inside same class
✔ Accessible inside derived class (inheritance)

❌ Cannot be accessed directly from main()
❌ Cannot be accessed through object

Protected is mainly used for inheritance.

===============================================================================
*/
protected:

    // Protected data member
    int b;

    // Protected member function
    void pro()
    {
        cout << "This is protected method. Value of b = " << b << endl;
    }



/*
===============================================================================
PUBLIC SECTION
===============================================================================

Public members:
---------------
✔ Accessible inside class
✔ Accessible outside class
✔ Accessible through object

Public members form the INTERFACE of the class.

===============================================================================
*/
public:

    // Public data member
    int c;

    /*
    ---------------------------------------------------------------------------
    Public member function

    Can access:
        private members
        protected members
        public members

    because it belongs to the same class.
    ---------------------------------------------------------------------------
    */
    void fun()
    {

        // Accessing private data member
        a = 10;

        // Accessing protected data member
        b = 20;

        // Accessing public data member
        c = 30;


        /*
        -----------------------------------------------------------------------
        Calling private member function

        Allowed because fun() belongs to same class.
        -----------------------------------------------------------------------
        */
        pvt();


        /*
        -----------------------------------------------------------------------
        Calling protected member function

        Allowed because fun() belongs to same class.
        -----------------------------------------------------------------------
        */
        pro();


        /*
        -----------------------------------------------------------------------
        Accessing public member

        Allowed everywhere.
        -----------------------------------------------------------------------
        */
        cout << "This is public method. Value of c = " << c << endl;
    }
};



int main()
{

    /*
    ---------------------------------------------------------------------------
    Object creation

    Memory is allocated for:
        a
        b
        c

    But access permissions still apply.
    ---------------------------------------------------------------------------
    */
    logic obj;



    /*
    ---------------------------------------------------------------------------
    Allowed

    fun() is public.
    ---------------------------------------------------------------------------
    */
    obj.fun();



    /*
    ---------------------------------------------------------------------------
    NOT ALLOWED

    obj.a = 10;      ❌ ERROR

    Reason:
    a is private.
    ---------------------------------------------------------------------------
    */


    /*
    ---------------------------------------------------------------------------
    NOT ALLOWED

    obj.pvt();       ❌ ERROR

    Reason:
    pvt() is private.
    ---------------------------------------------------------------------------
    */


    /*
    ---------------------------------------------------------------------------
    NOT ALLOWED

    obj.b = 20;      ❌ ERROR

    Reason:
    b is protected.
    ---------------------------------------------------------------------------
    */


    /*
    ---------------------------------------------------------------------------
    NOT ALLOWED

    obj.pro();       ❌ ERROR

    Reason:
    pro() is protected.
    ---------------------------------------------------------------------------
    */


    /*
    ---------------------------------------------------------------------------
    ALLOWED

    obj.c = 50;      ✔

    Reason:
    c is public.
    ---------------------------------------------------------------------------
    */


    return 0;
}



/*
===============================================================================
OUTPUT
===============================================================================

This is private method. Value of a = 10
This is protected method. Value of b = 20
This is public method. Value of c = 30

===============================================================================
MEMORY VIEW
===============================================================================

Object obj
-----------

a = 10      (private)
b = 20      (protected)
c = 30      (public)

All three exist in memory.

Difference is ACCESSIBILITY, not storage.

===============================================================================
IMPORTANT INTERVIEW QUESTION
===============================================================================

Q. Do private and protected members occupy memory?

A. Yes.

Access specifier controls ACCESS,
not memory allocation.

===============================================================================
ACCESS SPECIFIER TABLE
===============================================================================

                 Inside Class   Derived Class   Outside Class
----------------------------------------------------------------
private               ✔               ❌              ❌

protected             ✔               ✔              ❌

public                ✔               ✔              ✔

===============================================================================
ONE-LINE DEFINITIONS
===============================================================================

Private:
    Accessible only inside same class.

Protected:
    Accessible inside same class and derived classes.

Public:
    Accessible from anywhere through object.

===============================================================================
MEMORY TRICK
===============================================================================

PRIVATE
🔒 Only me

PROTECTED
👨‍👦 Me + My children (derived classes)

PUBLIC
🌍 Everyone

===============================================================================
*/