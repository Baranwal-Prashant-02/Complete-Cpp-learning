#include <iostream>
using namespace std;

/*
===============================================================================
FUNCTION HIDING (METHOD HIDING)
===============================================================================

Definition:
-----------
When a derived class defines a function with the SAME NAME as a function
in the base class, the base class function becomes hidden.

This is called:
    Function Hiding
    Method Hiding

Important:
----------
This is NOT function overriding because the base function is NOT virtual.

===============================================================================
*/


// ========================= BASE CLASS =========================
class student
{
public:

    void deep()
    {
        cout << "deep" << endl;
    }
};


// ========================= DERIVED CLASS =========================
class student1 : public student
{
public:

    /*
    ---------------------------------------------------------------------------
    Function with same name as base class function.

    This hides:

        student::deep()

    inside student1.

    Therefore when we call:

        obj.deep();

    this function executes.

    ---------------------------------------------------------------------------
    */
    void deep()
    {
        cout << "deep1" << endl;
    }
};



// ========================= MAIN =========================
int main()
{
    // Object of derived class
    student1 obj;

    /*
    ---------------------------------------------------------------------------
    Function call

    Compiler first searches inside student1.

    Found:
        deep()

    Therefore base class deep() is hidden.

    Output:
        deep1
    ---------------------------------------------------------------------------
    */
    obj.deep();

    return 0;
}


/*
===============================================================================
OUTPUT
===============================================================================

deep1

===============================================================================
WHAT HAPPENS INTERNALLY?
===============================================================================

Base Class:
-----------
student
    |
    ---> deep()

Derived Class:
--------------
student1
    |
    ---> deep()

When:

    obj.deep();

Compiler looks in student1 first.

It finds:

    student1::deep()

So:

    student::deep()

becomes hidden.

===============================================================================
IS THIS OVERRIDING?
===============================================================================

NO.

Because:

    deep()

in base class is NOT virtual.

For overriding:

    virtual void deep();

must exist in base class.

===============================================================================
FUNCTION HIDING vs FUNCTION OVERRIDING
===============================================================================

FUNCTION HIDING
---------------
class A
{
    void fun();
};

class B : public A
{
    void fun();
};

Base function hidden.


FUNCTION OVERRIDING
-------------------
class A
{
    virtual void fun();
};

class B : public A
{
    void fun();
};

Runtime polymorphism occurs.

===============================================================================
HOW TO ACCESS BASE CLASS FUNCTION?
===============================================================================

Use Scope Resolution Operator.

Example:

    obj.student::deep();

Code:

    int main()
    {
        student1 obj;

        obj.deep();           // deep1
        obj.student::deep();  // deep

        return 0;
    }

Output:
-------
deep1
deep

===============================================================================
INTERVIEW QUESTION
===============================================================================

Q. Why is student::deep() not called?

Answer:
Because student1 defines a function with the same name,
which hides the base class version.

===============================================================================
MEMORY TRICK
===============================================================================

Base Function:
    deep()

Derived Function:
    deep()

Derived says:
    "I have my own deep(), use mine."

Therefore base deep() becomes hidden.

===============================================================================
*/