/*
Constructor chaining is an object-oriented programming technique where one constructor calls another constructor during object creation.
It helps reduce code duplication and centralizes initialization logic by allowing multiple constructors to share common setup code
*/

#include<iostream>
using namespace std;

// ==================================================
// BASE CLASS
// ==================================================
// X is the parent class of A.
//
// Constructor:
// Called automatically when object is created.
//
// Destructor:
// Called automatically when object is destroyed.
// ==================================================

class X
{
public:

    // Default Constructor
    X()
    {
        cout << "X Constructor" << endl;
    }

    // Destructor
    ~X()
    {
        cout << "X Destructor" << endl;
    }
};

// ==================================================
// DERIVED CLASS A
// ==================================================
// A inherits from X.
//
// Relationship:
// X -> A
//
// A has:
// 1. Default Constructor
// 2. Parameterized Constructor
// ==================================================

class A : public X
{
public:

    // Default Constructor
    A()
    {
        cout << "A Constructor" << endl;
    }

    // Parameterized Constructor
    A(int a)
    {
        cout << "One Argument Constructor" << endl;
    }
};

// ==================================================
// DERIVED CLASS B
// ==================================================
// B inherits from A.
//
// Multilevel Inheritance:
//
// X
// |
// A
// |
// B
//
// ==================================================

class B : public A
{
public:

    // Default Constructor
    B()
    {
        cout << "B Constructor" << endl;
    }

    // Destructor
    ~B()
    {
        cout << "B Destructor" << endl;
    }
};

// ==================================================
// MAIN FUNCTION
// ==================================================

int main()
{
    // Object Creation
    //
    // Compiler first creates base class part,
    // then derived class part.
    //
    // Constructor Call Order:
    //
    // X()
    // A()
    // B()
    //
    B obj;

    // Object automatically destroyed
    // when main() ends.
}

// output:
// X Constructor
// A Constructor
// B Constructor
// B Destructor
// X Destructor

// You don't see:
// A Destructor
// because it doesn't exist.