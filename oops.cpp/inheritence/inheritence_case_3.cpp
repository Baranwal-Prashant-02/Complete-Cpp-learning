/*
PRIVATE INHERITANCE

public    → private
protected → private
private   → inaccessible



Meaning:
--------
The child class can use inherited public/protected members internally,
but they become private inside the child class.

Therefore they cannot be accessed through an object of the child class.
*/

#include<iostream>
using namespace std;

class A
{
public:

    void show()
    {
        cout << "Base class function" << endl;
    }
};

class B : private A
{
public:

    void display()
    {
        cout << "Derived class function" << endl;

        /*
        -----------------------------------------------------------------------
        Allowed

        show() was public in A.

        Due to private inheritance:

            class B : private A

        show() becomes private inside B.

        Private members can be accessed inside the class.
        -----------------------------------------------------------------------
        */
        show();
    }
};

int main()
{
    B obj;

    obj.display();   // ✔ Allowed

    /*
    ---------------------------------------------------------------------------
    ERROR

    show() became private inside B.

    Therefore it cannot be accessed through object.
    ---------------------------------------------------------------------------
    */

    // obj.show();   ❌ ERROR

    return 0;
}