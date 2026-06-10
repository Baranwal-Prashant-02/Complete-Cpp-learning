#include <iostream>
using namespace std;

/*
   This program demonstrates:
   1. Default constructor
   2. Copy constructor
   3. Difference between object creation and object copying
*/

class logic
{
    int a;   // Private data member (each object has its own copy)

public:

    // ---------------- DEFAULT CONSTRUCTOR ----------------
    // Called automatically when an object is created without arguments
    // Used to initialize data members and avoid garbage values
    logic()
    {
        a = 10;   // Initializing variable 'a'
    }

    // ---------------- COPY CONSTRUCTOR ----------------
    // Called when a new object is created using an existing object
    // Parameter is passed by REFERENCE to:
    // 1. Avoid infinite recursion
    // 2. Improve performance
    // 3. Follow C++ standard
    logic(logic &obj)
    {
        // Copying value from existing object's data member
        a = obj.a;
    }

    // ---------------- MEMBER FUNCTION ----------------
    // Displays value of data member 'a'
    void display()
    {
        cout << a << endl;
    }
};

int main()
{
    // Creating first object
    // Default constructor is called
    logic obj;

    // Displays value initialized by default constructor
    obj.display();   // Output: 10

    // Creating second object using first object
    // Copy constructor is called here
    logic obj1(obj);   // obj is passed as argument

    // Displays copied value
    obj1.display();   // Output: 10

    return 0;
}
