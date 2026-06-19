#include <iostream>
using namespace std;

/*
===============================================================================
OVERRIDE KEYWORD WITH PURE VIRTUAL FUNCTION
===============================================================================

CONCEPTS USED:
--------------
1. Abstract Class
2. Pure Virtual Function
3. Inheritance
4. Function Overriding
5. override Keyword

WHY override?
-------------
The override keyword tells the compiler:

    "I am intentionally overriding a virtual function from the base class."

The compiler will verify that the function signature matches exactly.

Introduced in:
--------------
C++11

Benefits:
---------
✔ Prevents accidental mistakes
✔ Improves readability
✔ Makes code safer

===============================================================================
*/


// ========================== ABSTRACT CLASS ==========================
class Shape
{
public:

    /*
    ---------------------------------------------------------------------------
    PURE VIRTUAL FUNCTION

    virtual -> enables runtime polymorphism

    = 0     -> makes function pure virtual

    Since Shape contains a pure virtual function,
    Shape becomes an ABSTRACT CLASS.

    Therefore:

        Shape obj;   ❌ NOT ALLOWED

    ---------------------------------------------------------------------------
    */
    virtual void draw() = 0;
};



// ========================== DERIVED CLASS ==========================
class Circle : public Shape
{
public:

    /*
    ---------------------------------------------------------------------------
    OVERRIDING PURE VIRTUAL FUNCTION

    draw() in Shape must be implemented.

    override keyword tells compiler:

        "This function MUST override a base virtual function."

    If signature is wrong, compiler will generate an error.

    ---------------------------------------------------------------------------
    */
    void draw() override
    {
        cout << "Drawing Circle" << endl;
    }
};



// ========================== MAIN FUNCTION ==========================
int main()
{
    /*
    ---------------------------------------------------------------------------
    Object creation

    Allowed because Circle has implemented draw().

    If Circle did not implement draw(),
    Circle would also become an abstract class.
    ---------------------------------------------------------------------------
    */
    Circle c;

    /*
    ---------------------------------------------------------------------------
    Calling overridden function

    Output:
        Drawing Circle
    ---------------------------------------------------------------------------
    */
    c.draw();

    return 0;
}



/*
===============================================================================
OUTPUT
===============================================================================

Drawing Circle

===============================================================================
WHAT HAPPENS INTERNALLY?
===============================================================================

Shape
-----
draw() = 0

        ▲
        │ Inheritance
        │

Circle
------
draw() implementation

When:

    Circle c;

Object creation succeeds because draw() is implemented.

===============================================================================
EXAMPLE OF A MISTAKE WITHOUT override
===============================================================================

class Shape
{
public:
    virtual void draw(int x) = 0;
};

class Circle : public Shape
{
public:
    void draw()   // ❌ Different signature
    {
    }
};

Problem:
--------
draw(int) and draw() are different functions.

Compiler may not clearly indicate the mistake.

===============================================================================
SAME EXAMPLE WITH override
===============================================================================

class Circle : public Shape
{
public:
    void draw() override
    {
    }
};

Compiler Error:
---------------
"draw marked override but does not override"

This immediately reveals the bug.

===============================================================================
INTERVIEW QUESTIONS
===============================================================================

Q. Is override mandatory?

Answer:
No.
The code works without it.

But it is strongly recommended.

-------------------------------------------------------------------------------

Q. Can override be used without virtual?

Answer:
No.

override only works with virtual functions.

-------------------------------------------------------------------------------

Q. Can override be used with pure virtual functions?

Answer:
Yes.

In fact, it is commonly used when implementing
pure virtual functions in derived classes.

-------------------------------------------------------------------------------

Q. What happens if Circle does not implement draw()?

Answer:

class Circle : public Shape
{
};

Then:

    Circle c;   ❌ ERROR

because Circle also becomes an abstract class.

===============================================================================
MEMORY TRICK
===============================================================================

virtual
-------
"Can be overridden"

override
--------
"I am overriding it, compiler please verify"

pure virtual (=0)
-----------------
"Must be overridden"

===============================================================================
*/