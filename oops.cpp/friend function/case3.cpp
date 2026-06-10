#include <iostream>
using namespace std;

/*
===============================================================================
PROGRAM: Member Function of One Class as Friend of Another Class
===============================================================================

CONCEPTS USED:
--------------
1. Class
2. Object
3. Private Data Members
4. Friend Member Function
5. Cross-Class Access

WHAT MAKES THIS PROGRAM SPECIAL?
--------------------------------
In previous examples:

    friend void global();

A GLOBAL function was made friend.

In this example:

    friend void Logic2::fun();

A MEMBER FUNCTION of another class is made friend.

Only Logic2::fun() gets access.

NOT the entire Logic2 class.

===============================================================================
*/


// ============================ CLASS Logic2 ============================
class Logic2 {

private:

    // Private data member of Logic2
    int data;

public:

    // Input function
    void set() {
        cin >> data;
    }

    /*
    ---------------------------------------------------------------------------
    Function declaration only.

    Definition will come later because it needs Logic1 definition.
    ---------------------------------------------------------------------------
    */
    void fun();
};



// ============================ CLASS Logic1 ============================
class Logic1 {

private:

    // Private data member
    int a;

public:

    // Input function
    void set() {
        cin >> a;
    }

    /*
    ---------------------------------------------------------------------------
    FRIEND MEMBER FUNCTION

    This line gives access ONLY to:

        Logic2::fun()

    Not to:
        Logic2::set()

    Not to:
        Logic2 object directly

    Only this specific function becomes friend.

    Therefore Logic2::fun() can access private member 'a'.

    This is more secure than making the whole class friend.
    ---------------------------------------------------------------------------
    */
    friend void Logic2::fun();
};



// ======================== FRIEND MEMBER FUNCTION ========================
/*
----------------------------------------------------------------------------
This function belongs to Logic2.

Because Logic1 declared it as friend,

it can access:

    Logic1::a

even though 'a' is private.

----------------------------------------------------------------------------
*/
void Logic2::fun() {

    // Accessing Logic2's own private data
    data = 10;

    // Create object of Logic1
    Logic1 obj;

    // Input value for private member 'a'
    obj.set();



    /*
    ------------------------------------------------------------------------
    FRIEND ACCESS

    Normally:

        cout << obj.a;

    would be illegal because 'a' is private.

    But Logic2::fun() is declared friend.

    Therefore access is allowed.
    ------------------------------------------------------------------------
    */
    cout << obj.a + data;
}



// =============================== MAIN ===============================
int main() {

    /*
    Create object of Logic2
    */
    Logic2 obj;

    /*
    Call member function.

    This function has special access to Logic1's private data.
    */
    obj.fun();

    return 0;
}



/*
===============================================================================
SAMPLE EXECUTION
===============================================================================

Input:
------
20

Execution:
----------

Logic2::fun()

data = 10

Input:
a = 20

Calculation:

a + data

20 + 10 = 30

Output:
-------
30

===============================================================================
MEMORY VIEW
===============================================================================

Logic2 Object
-------------
data = 10

Logic1 Object
-------------
a = 20

Logic2::fun()
-------------
Can access:
    data  (its own private member)
    a     (friend access granted)

===============================================================================
IMPORTANT DIFFERENCE FROM CASE 1
===============================================================================

CASE 1:
-------

friend void global();

A global function becomes friend.


CASE 3:
-------

friend void Logic2::fun();

A MEMBER FUNCTION becomes friend.


===============================================================================
WHY USE THIS?
===============================================================================

Suppose Logic2 has 20 functions:

    set()
    fun()
    show()
    update()
    display()
    ...

If we make whole Logic2 a friend class,
all functions get access.

Sometimes we want ONLY ONE function
to access private data.

Then we use:

    friend void Logic2::fun();

This follows better security and encapsulation.

===============================================================================
INTERVIEW / VIVA QUESTIONS
===============================================================================

Q. Is Logic2 a friend class?
A. No.

Q. Is Logic2::fun() a friend?
A. Yes.

Q. Can Logic2::set() access Logic1::a?
A. No.

Q. Why?
A. Only Logic2::fun() was declared friend.

Q. Is friendship given to whole class?
A. No, only to one function.

===============================================================================
ONE-LINE DEFINITION
===============================================================================

A member function of one class can be declared as a friend of another
class, allowing that specific function to access the private members
of the class that grants friendship.

===============================================================================
MEMORY TRICK
===============================================================================

Friend Function Case 1:
    🔑 Give key to a person (global function)

Friend Function Case 3:
    🔑 Give key to only ONE employee of a company
       (specific member function)

Not the entire company.

===============================================================================
*/