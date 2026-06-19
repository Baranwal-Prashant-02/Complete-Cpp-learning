#include<iostream>
using namespace std;

class A
{
public:
    // Virtual function in base class
    // Enables Runtime Polymorphism
    virtual void show()
    {
        cout << "A show" << endl;
    }
};

class B : public A
{
public:
    // Same function signature as base class
    // Overrides A::show()
    void show()
    {
        cout << "B show" << endl;
    }
};

int main()
{
    B obj;    // Object of derived class
    A obj1;   // Object of base class

    // Direct call using derived object
    // Calls B::show()
    obj.show();

    // Base class pointer
    A *ptr = NULL;

    // Pointer points to base class object
    ptr = &obj1;

    // Calls A::show()
    ptr->show();

    // Pointer now points to derived class object
    ptr = &obj;

    // Because show() is virtual,
    // B::show() is called at runtime
    // (Dynamic Binding)
    ptr->show();
}

/*
OUTPUT:
B show
A show
B show

--------------------------------------------------
CONCEPTS USED
--------------------------------------------------

1. Function Overriding
   - Same function name
   - Same parameter list
   - Inheritance required
   - Virtual keyword used

2. Virtual Function
   - Declared in base class
   - Enables Runtime Polymorphism

3. Runtime Polymorphism
   - Decision made at runtime
   - Base class pointer calls derived class function

4. Dynamic Binding (Late Binding)
   - Function call resolved at runtime

5. Upcasting
   - Base class pointer points to derived class object

   A *ptr;
   B obj;

   ptr = &obj;   // Valid

--------------------------------------------------
IMPORTANT NOTES
--------------------------------------------------

- ptr is a pointer of type A.

- ptr can point to:
  1. A object
  2. B object

- This is called Upcasting.

- Parent pointer can point to child object:
  A *ptr = &obj;      // Valid

- Child pointer cannot point to parent object:
  B *ptr = &obj1;     // Invalid

- Without virtual:
  ptr->show() would call A::show()
  (Static Binding)

- With virtual:
  ptr->show() calls B::show()
  (Dynamic Binding)

- This is Function Overriding,
  not Function Hiding.

- Runtime Polymorphism is achieved
  through Virtual Functions and Overriding.
*/

// B show
// A show
// B show