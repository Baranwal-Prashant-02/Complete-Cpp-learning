#include <iostream>
using namespace std;

class Logic
{
public:
    // ==========================
    // NON-STATIC DATA MEMBER
    // ==========================
    // Every object gets its own copy of 'a'
    int a;

    // ==========================
    // STATIC DATA MEMBER
    // ==========================
    // Only one copy of 'b' exists for the entire class
    // Shared among all objects
    static int b;

    // ==========================
    // STATIC MEMBER FUNCTION
    // ==========================
    // Belongs to the class, not to any object
    // Can be called using:
    // Logic::sm();
    //
    // Static functions do NOT have a 'this' pointer.
    // Therefore they can access only static members.
    static void sm()
    {
        cout << "Static Method Called" << endl;

        // Allowed because 'b' is static
        cout << "Value of static b = " << b << endl;

        // Not Allowed
        // cout << a;    // ERROR
        //
        // Reason:
        // Static function does not know which object's
        // 'a' should be accessed.
    }

    // ==========================
    // NON-STATIC MEMBER FUNCTION
    // ==========================
    // Belongs to an object.
    // Has an implicit 'this' pointer.
    //
    // Can access both static and non-static members.
    void nsm()
    {
        cout << "Non Static Method Called" << endl;

        // Accessing non-static member
        cout << "a = " << a << endl;

        // Accessing static member
        cout << "b = " << b << endl;
    }
};

// ==========================
// STATIC DATA MEMBER DEFINITION
// ==========================
//
// Declaration inside class:
//      static int b;
//
// Memory allocation happens here.
//
int Logic::b = 200;

int main()
{
    // ==========================
    // OBJECT CREATION
    // ==========================
    //
    // Each object gets its own copy of 'a'
    // but all share the same 'b'
    //
    Logic obj;
    Logic obj1;
    Logic obj2;

    // Assign values to individual copies of 'a'
    obj.a = 10;
    obj1.a = 20;
    obj2.a = 30;

    /*
        Memory Representation

        obj
        ----
        a = 10

        obj1
        ----
        a = 20

        obj2
        ----
        a = 30


        Shared Class Area
        -----------------
        b = 200
        sm()
    */

    // ==========================
    // CALLING STATIC FUNCTION
    // ==========================
    //
    // Although called through objects,
    // all calls refer to the same function.
    //
    obj.sm();
    obj1.sm();
    obj2.sm();

    cout << endl;

    // Preferred way
    Logic::sm();

    cout << endl;

    // ==========================
    // CALLING NON-STATIC FUNCTION
    // ==========================
    //
    // Works on individual objects.
    //
    obj.nsm();

    cout << endl;

    // ==========================
    // MODIFYING STATIC MEMBER
    // ==========================
    //
    // Change through one object
    //
    obj.b = 500;

    // Since 'b' is shared,
    // all objects see the updated value.
    cout << "obj.b  = " << obj.b << endl;
    cout << "obj1.b = " << obj1.b << endl;
    cout << "obj2.b = " << obj2.b << endl;

    return 0;
}

/*
==========================
INTERVIEW NOTES
==========================

1. Static Variable
   - One copy per class.
   - Shared among all objects.
   - Memory allocated only once.

2. Non-Static Variable
   - One copy per object.
   - Separate memory for every object.

3. Static Function
   - Belongs to class.
   - No 'this' pointer.
   - Can access only static members.

4. Non-Static Function
   - Belongs to object.
   - Has 'this' pointer.
   - Can access both static and non-static members.

5. Calling Static Function
   Preferred:
       Logic::sm();

   Possible:
       obj.sm();

6. Why Static Functions Cannot Access Non-Static Data?

   Suppose:

       Logic obj1;
       Logic obj2;

   Static function is called as:

       Logic::sm();

   Which 'a' should be used?

       obj1.a ?
       obj2.a ?

   Compiler cannot decide.

   Therefore static functions can only access static members.
*/


// o/p
// obj.b  = 500
// obj1.b = 500
// obj2.b = 500