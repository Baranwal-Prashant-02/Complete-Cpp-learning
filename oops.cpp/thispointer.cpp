/*
    This program demonstrates the use of:
    
    - Parameterized Constructor
    - this Pointer
    - Object Creation
    - Data Member Initialization
    - Updating Object Data
    - How member functions internally receive the object's address

    The 'this' pointer is an implicit pointer available inside
    every non-static member function. It stores the address of
    the current object that invoked the function.
*/

#include<iostream>
using namespace std;

class logic
{
private:

    // Data members of the class
    int x, y;

public:

    // ==================================================
    // PARAMETERIZED CONSTRUCTOR
    // ==================================================
    // Called automatically when object is created.
    //
    // logic obj(10,20);
    //
    // Internally:
    //
    // x = 10
    // y = 20
    // ==================================================

    logic(int a, int b)
    {
        x = a;
        y = b;
    }

    // ==================================================
    // DISPLAY FUNCTION
    // ==================================================
    // Every non-static member function receives
    // an implicit pointer called 'this'.
    //
    // Internally:
    //
    // obj.display();
    //
    // becomes approximately:
    //
    // display(&obj);
    //
    // this = &obj
    // ==================================================

    void display()
    {
        // Accessing member variables directly
        cout << "x = " << x << " y = " << y << endl;

        // Accessing member variable using this pointer
        cout << "this->x = " << this->x << endl;

        // Both are equivalent
        // x
        // this->x
    }

    // ==================================================
    // UPDATE FUNCTION
    // ==================================================
    // Updates object data.
    //
    // Internally:
    //
    // obj.update();
    //
    // becomes approximately:
    //
    // update(&obj);
    //
    // this points to obj.
    // ==================================================

    void update()
    {
        x += 5;
        y += 5;
    }
};

int main()
{
    // ==================================================
    // OBJECT CREATION
    // ==================================================
    //
    // Constructor call:
    //
    // logic obj(10,20);
    //
    // Memory:
    //
    // obj
    // ------
    // x = 10
    // y = 20
    // ------

    logic obj(10,20);

    // Display initial values
    obj.display();

    // Update values
    obj.update();

    cout << "\nAfter Update\n";

    // Display updated values
    obj.display();

    return 0;
}

/*
======================== OUTPUT ========================

x = 10 y = 20
this->x = 10

After Update

x = 15 y = 25
this->x = 15

========================================================

MEMORY REPRESENTATION

Before Update:

obj
----------------
x = 10
y = 20
----------------

After Update:

obj
----------------
x = 15
y = 25
----------------

========================================================

UNDERSTANDING this POINTER

Whenever an object calls a member function:

obj.display();

Compiler approximately converts it to:

display(&obj);

where:

this = &obj

Example:

Address of obj = 1000

this = 1000

Therefore:

this->x

means:

(*this).x

which accesses x of the current object.

========================================================

IMPORTANT NOTES

1. Every non-static member function has a
   hidden pointer called 'this'.

2. 'this' stores the address of the
   current object.

3. this->x and x are equivalent.

4. Static member functions do NOT have
   a 'this' pointer because they belong
   to the class, not to an object.

5. Common use of 'this':

   this->x = x;

   Used when local variables and data
   members have the same name.

Example:

logic(int x, int y)
{
    this->x = x;
    this->y = y;
}

Left Side  -> Data Member
Right Side -> Local Variable

========================================================

INTERVIEW QUESTION

Q. What is this pointer?

Ans:

The 'this' pointer is an implicit pointer
available inside every non-static member
function. It stores the address of the
current object that invoked the function.

*/

// output:
// x = 10 y = 20
// this->x = 10

// After Update
// x = 15 y = 25
// this->x = 15