#include <iostream>
using namespace std;

/*
===============================================================================
PROGRAM: Friend Function Accessing Private Data of Multiple Classes
===============================================================================

CONCEPTS USED:
--------------
1. Class
2. Object
3. Private Data Members
4. Member Functions
5. Friend Function
6. Accessing Private Data Across Multiple Classes

WHY FRIEND FUNCTION?
--------------------
Normally, private members can ONLY be accessed inside their own class.

Example:
    obj.data;   // ❌ Not allowed outside class

A friend function is given SPECIAL PERMISSION by a class to access
its private members.

In this program:
    global()

is a friend of:
    - Logic1
    - Logic2

Therefore it can access:
    obj.data
    obj1.data1

even though both are private.

===============================================================================
*/


// ============================ CLASS 1 ============================
class Logic1 {

private:

    // Private data member
    // Accessible only inside Logic1
    int data;

public:

    // Member function to take input
    void fun() {
        cin >> data;
    }

    /*
    ---------------------------------------------------------------------------
    FRIEND FUNCTION DECLARATION

    This line gives special access permission to global().

    Meaning:
    global() can access private members of Logic1.

    Without this line:
        obj.data

    inside global() would generate a compiler error.
    ---------------------------------------------------------------------------
    */
    friend void global();
};


// ============================ CLASS 2 ============================
class Logic2 {

private:

    // Private data member
    int data1;

public:

    // Member function to take input
    void set() {
        cin >> data1;
    }

    /*
    ---------------------------------------------------------------------------
    Same friend function declared here.

    Now global() can access:

        Logic1::data
        Logic2::data1

    One friend function can be friend of multiple classes.
    ---------------------------------------------------------------------------
    */
    friend void global();
};



// ========================= FRIEND FUNCTION =========================
/*
----------------------------------------------------------------------------
IMPORTANT:

global() is NOT a member function of Logic1.
global() is NOT a member function of Logic2.

It is a NORMAL GLOBAL FUNCTION.

But because both classes declared it as friend,
it can access their private members.

This is one of the most common uses of friend functions:
Combining or comparing private data from multiple classes.
----------------------------------------------------------------------------
*/
void global() {

    // Create object of Logic1
    Logic1 obj;

    // Take input for Logic1 private member 'data'
    obj.fun();



    // Create object of Logic2
    Logic2 obj1;

    // Take input for Logic2 private member 'data1'
    obj1.set();



    /*
    -----------------------------------------------------------------------
    FRIEND FUNCTION POWER

    Normally these statements are illegal:

        cout << obj.data;
        cout << obj1.data1;

    because data and data1 are PRIVATE.

    But since global() is friend of both classes,
    it can access them directly.
    -----------------------------------------------------------------------
    */

    cout << obj.data + obj1.data1;
}



// ============================== MAIN ==============================
int main() {

    /*
    -----------------------------------------------------------------------
    Calling friend function.

    Notice:
    No object is used.

    Friend functions are called exactly like normal functions.

        global();

    NOT:

        obj.global();   ❌

    because friend functions are NOT class members.
    -----------------------------------------------------------------------
    */
    global();

    return 0;
}


/*
===============================================================================
SAMPLE EXECUTION
===============================================================================

Input:
------
10
20

Execution:
----------
obj.data  = 10
obj1.data1 = 20

Friend function calculates:

10 + 20 = 30

Output:
-------
30

===============================================================================
MEMORY VIEW
===============================================================================

Logic1 Object (obj)
-------------------
data = 10

Logic2 Object (obj1)
--------------------
data1 = 20

Friend Function:
----------------
Can access both values because it has special permission.

===============================================================================
IMPORTANT INTERVIEW / EXAM POINTS
===============================================================================

Q. Is a friend function a member function?
A. No.

Q. Why can it access private members?
A. Because it is declared as friend.

Q. Can one friend function be friend of multiple classes?
A. Yes.

Q. How is a friend function called?
A. Like a normal function.

===============================================================================
ONE-LINE DEFINITION
===============================================================================

A friend function is a non-member function that is declared using the
'friend' keyword inside a class and is allowed to access the private
and protected members of that class.

===============================================================================
MEMORY TRICK
===============================================================================

Private Data = 🔒 Locked Room

Friend Function = 🔑 Special Key

Only classes that explicitly give the key can be accessed.

===============================================================================
*/