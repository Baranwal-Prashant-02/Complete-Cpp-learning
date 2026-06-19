#include<iostream>
using namespace std;

/*
===============================================================================
ABSTRACTION USING ABSTRACT CLASS & PURE VIRTUAL FUNCTION
===============================================================================

ABSTRACTION:
------------
Abstraction means hiding implementation details and showing only essential
features to the user.

In C++, abstraction is commonly achieved using:
1. Abstract Classes
2. Pure Virtual Functions

PURE VIRTUAL FUNCTION:
----------------------
Syntax:
    virtual return_type function_name() = 0;

Example:
    virtual void logic() = 0;

The '= 0' makes the function PURE VIRTUAL.

ABSTRACT CLASS:
---------------
A class containing at least one pure virtual function is called an
ABSTRACT CLASS.

Rules:
------
✔ Cannot create object of abstract class
✔ Can contain normal(concrete) methods
✔ Must be inherited
✔ Derived class must override pure virtual functions

===============================================================================
*/

class A   // Abstract Class
{
public:

    /*
    ---------------------------------------------------------------------------
    PURE VIRTUAL FUNCTION

    virtual  -> Enables runtime polymorphism

    = 0      -> Makes function pure virtual

    This function has NO implementation.

    Any derived class must provide its own implementation.
    ---------------------------------------------------------------------------
    */
    virtual void logic() = 0;


    /*
    ---------------------------------------------------------------------------
    CONCRETE METHOD

    A normal function with implementation.

    Abstract classes can contain normal functions.
    ---------------------------------------------------------------------------
    */
    void logic1()
    {
        cout << "logic 1" << endl;
    }
};



/*
===============================================================================
DERIVED CLASS
===============================================================================

Class B inherits Abstract Class A.

Since A contains a pure virtual function,
B MUST implement logic().

Otherwise B will also become an abstract class.

===============================================================================
*/
class B : public A
{
public:

    /*
    ---------------------------------------------------------------------------
    Normal member function of B
    ---------------------------------------------------------------------------
    */
    void logic2()
    {
        cout << "logic 2" << endl;
    }


    /*
    ---------------------------------------------------------------------------
    OVERRIDING PURE VIRTUAL FUNCTION

    This implementation satisfies the contract created by class A.

    Without this function:

        class B

    would also become an abstract class.

    Then:

        B obj;

    would generate an error.
    ---------------------------------------------------------------------------
    */
    void logic()
    {
        cout << "logic" << endl;
    }
};



int main()
{
    /*
    ---------------------------------------------------------------------------
    Object creation of derived class

    Allowed because B has implemented logic().
    ---------------------------------------------------------------------------
    */
    B obj;

    /*
    ---------------------------------------------------------------------------
    Calling B's own function
    ---------------------------------------------------------------------------
    */
    obj.logic2();



    /*
    ---------------------------------------------------------------------------
    Calling inherited concrete method from class A
    ---------------------------------------------------------------------------
    */
    obj.logic1();



    /*
    ---------------------------------------------------------------------------
    Calling overridden pure virtual function
    ---------------------------------------------------------------------------
    */
    obj.logic();

    return 0;
}



/*
===============================================================================
WHY THIS IS INVALID?
===============================================================================

int main()
{
    A obj;     // ❌ ERROR

    obj.logic1();
    obj.logic();
}

Reason:
-------
A is an ABSTRACT CLASS.

Abstract class contains:

    virtual void logic() = 0;

Compiler does not allow object creation.

Error:
------
cannot declare variable 'obj' to be of abstract type 'A'

===============================================================================
OUTPUT
===============================================================================

logic 2
logic 1
logic

===============================================================================
EXECUTION FLOW
===============================================================================

B obj;
   |
   |-- logic2() --> "logic 2"
   |
   |-- logic1() --> inherited from A --> "logic 1"
   |
   |-- logic()  --> overridden in B --> "logic"

===============================================================================
IMPORTANT INTERVIEW QUESTIONS
===============================================================================

Q1. What is a pure virtual function?

Answer:
A virtual function assigned '= 0'.

Example:
    virtual void logic() = 0;


Q2. What is an abstract class?

Answer:
A class containing at least one pure virtual function.


Q3. Can we create object of abstract class?

Answer:
No.


Q4. Can abstract class contain normal functions?

Answer:
Yes.

Example:
    void logic1(){}


Q5. What happens if B does not override logic()?

Answer:
B also becomes abstract.

Object creation becomes impossible.

===============================================================================
MEMORY TRICK
===============================================================================

Pure Virtual Function
        ↓
Creates a Contract 📜

Abstract Class says:

"Any child class MUST implement this function."

Class B signs the contract by overriding:

    void logic()

===============================================================================
*/