/*
    This program demonstrates different ways of assigning
    values to data members in a class.

    1. Taking input from the user using a member function.
    2. Passing values through a member function.
    3. Passing values through a parameterized constructor.

    It also demonstrates:
    - Class and Object
    - Data Members
    - Member Functions
    - Default Constructor
    - Parameterized Constructor
    - Encapsulation
*/

#include<iostream>
using namespace std;

class logic
{
private:

    // Data Members
    // Accessible only inside the class.
    int a, b;

public:

    // ==================================================
    // USER INPUT FUNCTION
    // ==================================================
    // Takes values from the user and stores
    // them in data members.
    // ==================================================

    void get()
    {
        cin >> a;
        cin >> b;
    }

    // ==================================================
    // DISPLAY FUNCTION
    // ==================================================
    // Displays the values currently stored
    // in data members a and b.
    // ==================================================

    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }

    // ==================================================
    // MEMBER FUNCTION INPUT
    // ==================================================
    // Assigns values using function arguments.
    //
    // Example:
    // obj.input(10,20);
    //
    // a = 10
    // b = 20
    // ==================================================

    void input(int x, int y)
    {
        a = x;
        b = y;
    }

    // ==================================================
    // DEFAULT CONSTRUCTOR
    // ==================================================
    // Called automatically when an object
    // is created without arguments.
    //
    // Example:
    // logic obj;
    //
    // Currently it performs no action.
    // ==================================================

    logic()
    {

    }

    // ==================================================
    // PARAMETERIZED CONSTRUCTOR
    // ==================================================
    // Called automatically when values are
    // passed during object creation.
    //
    // Example:
    // logic obj1(15,16);
    //
    // a = 15
    // b = 16
    // ==================================================

    logic(int x, int y)
    {
        a = x;
        b = y;
    }
};

int main()
{
    // ==================================================
    // OBJECT CREATION USING DEFAULT CONSTRUCTOR
    // ==================================================

    logic obj;

    // ==================================================
    // FIRST WAY : USER INPUT
    // ==================================================
    //
    // Values are entered manually by the user.
    //
    // Example Input:
    // 5
    // 6
    //
    // a = 5
    // b = 6
    // ==================================================

    cout << "First Way : Input By User" << endl;

    obj.get();

    obj.display();

    // ==================================================
    // SECOND WAY : USING MEMBER FUNCTION
    // ==================================================
    //
    // Values are assigned using a function.
    //
    // a = 10
    // b = 20
    // ==================================================

    cout << "\nSecond Way : By Making A Method" << endl;

    obj.input(10,20);

    obj.display();

    // ==================================================
    // THIRD WAY : USING PARAMETERIZED CONSTRUCTOR
    // ==================================================
    //
    // Values are passed directly while creating
    // the object.
    //
    // a = 15
    // b = 16
    // ==================================================

    cout << "\nThird Way : By Creating A Constructor" << endl;

    logic obj1(15,16);

    obj1.display();

    return 0;
}

/*

====================================================
SAMPLE INPUT
====================================================

5
6

====================================================
OUTPUT
====================================================

First Way : Input By User
5
6

The value of a is 5
The value of b is 6

Second Way : By Making A Method

The value of a is 10
The value of b is 20

Third Way : By Creating A Constructor

The value of a is 15
The value of b is 16

====================================================
MEMORY REPRESENTATION
====================================================

After:

obj.input(10,20);

obj
----------------
a = 10
b = 20
----------------


After:

logic obj1(15,16);

obj1
----------------
a = 15
b = 16
----------------

====================================================
IMPORTANT CONCEPTS
====================================================

1. CLASS

A class is a blueprint used to create objects.

Example:

class logic
{
    ...
};

----------------------------------------------------

2. OBJECT

An object is an instance of a class.

Example:

logic obj;
logic obj1;

----------------------------------------------------

3. DATA MEMBERS

Variables declared inside a class.

Example:

int a, b;

----------------------------------------------------

4. MEMBER FUNCTIONS

Functions declared inside a class.

Examples:

get()
display()
input()

----------------------------------------------------

5. ENCAPSULATION

Binding data and functions together
inside a single unit (class).

Example:

class logic
{
    int a,b;

    void get();
    void display();
};

----------------------------------------------------

6. DEFAULT CONSTRUCTOR

Constructor without parameters.

Example:

logic()
{
}

Called automatically when:

logic obj;

----------------------------------------------------

7. PARAMETERIZED CONSTRUCTOR

Constructor with parameters.

Example:

logic(int x,int y)
{
    a = x;
    b = y;
}

Called automatically when:

logic obj1(15,16);

----------------------------------------------------

8. THREE WAYS OF ASSIGNING VALUES

Way 1:
User Input

obj.get();

Way 2:
Using Member Function

obj.input(10,20);

Way 3:
Using Constructor

logic obj1(15,16);

*/

