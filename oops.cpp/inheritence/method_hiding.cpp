// This is Method Hiding, not Method Overriding, because virtual is not used.
/*
Method Hiding occurs when a derived class declares a function with the same name and signature as a base class function without using virtual.
The derived class function hides the base class function, and calls are resolved at compile time.
*/

// Method Hiding

// A derived class defines a function with the same name as a base class function.


#include<iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "A show" << endl;
    }
};

class B : public A
{
public:
    // Same function name and same signature as in class A
    // This function hides A::show()

    void show()
    {
        cout << "B show" << endl;
    }
};

int main()
{
    B obj;

    // Calls B::show()
    // A::show() is hidden by B::show()
    obj.show();

    return 0;
}

/*
METHOD HIDING (FUNCTION HIDING)

1. B::show() hides A::show().
2. When obj.show() is called, B::show() executes.
3. A::show() is not accessible directly through the object.
4. This is NOT Method Overriding because the base class function is not virtual.
5. Function call is resolved at Compile Time (Static Binding).
6. Runtime Polymorphism is not achieved.
7. To achieve Method Overriding, declare show() as virtual in class A.

Example:
class A
{
public:
    virtual void show();
};

class B : public A
{
public:
    void show();   // Overriding
};
*/
