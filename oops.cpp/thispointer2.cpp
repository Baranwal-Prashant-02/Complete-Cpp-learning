/*
    This program demonstrates the use of the 'this' pointer.

    The 'this' pointer always stores the address of the current object.

    It is mainly used when:
    - Data member names and parameter names are the same.
    - We want to explicitly access the current object's data members.

    In this example:
    - Constructor receives x and y as arguments.
    - Data members are also named x and y.
    - Therefore 'this' is used to differentiate them.
*/

#include<iostream>
using namespace std;

class logic
{
private:

    // Data members of the object
    int x, y;

public:

    // ==================================================
    // PARAMETERIZED CONSTRUCTOR
    // ==================================================
    //
    // Object Creation:
    // logic obj(10,20);
    //
    // Parameter Values:
    // x = 10
    // y = 20
    //
    // Here parameter names and data member names
    // are the same.
    //
    // this->x  -> Data Member x
    // x        -> Constructor Parameter x
    //
    // this->y  -> Data Member y
    // y        -> Constructor Parameter y
    //
    // Values stored in object:
    // x = 10 + 5 = 15
    // y = 20 + 5 = 25
    // ==================================================

    logic(int x, int y)
    {
        this->x = x + 5;
        this->y = y + 5;
    }

    // ==================================================
    // DISPLAY FUNCTION
    // ==================================================
    //
    // Displays the current values stored
    // inside the object.
    // ==================================================

    void display()
    {
        cout << x << " " << y << endl;
    }

    // ==================================================
    // UPDATE FUNCTION
    // ==================================================
    //
    // Adds 5 to both data members.
    //
    // Before:
    // x = 15
    // y = 25
    //
    // After:
    // x = 20
    // y = 30
    //
    // Internally:
    //
    // obj.update();
    //
    // approximately behaves like:
    //
    // update(&obj);
    //
    // where:
    // this = &obj
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
    // Constructor Call:
    // logic obj(10,20);
    //
    // Stored Values:
    // x = 15
    // y = 25
    // ==================================================

    logic obj(10,20);

    // Displays:
    // 15 25
    obj.display();

    // Updates values:
    // x = 20
    // y = 30
    obj.update();

    // Updated values are not displayed because
    // display() is not called again.

    return 0;
}

/*
==================== OUTPUT ====================

15 25

================================================

Memory After Constructor:

obj
----------------
x = 15
y = 25
----------------

================================================

Memory After update():

obj
----------------
x = 20
y = 30
----------------

================================================

To See Updated Values:

obj.display();
obj.update();
obj.display();

Output:

15 25
20 30

================================================

Key Point:

this->x = x + 5;

Left Side  -> Data Member x
Right Side -> Constructor Parameter x

this->y = y + 5;

Left Side  -> Data Member y
Right Side -> Constructor Parameter y

*/