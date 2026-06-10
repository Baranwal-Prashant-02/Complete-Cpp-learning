/*
    This program demonstrates how constructors and destructors work in C++.
    
    - Constructor is automatically called when an object is created.
    - Destructor is automatically called when an object is destroyed.
    - Constructors execute in the same order as object creation.
    - Destructors execute in the reverse order of object creation.
*/

#include<iostream>
using namespace std;

class logic
{
private:

    // Private data members
    // These can only be accessed inside the class.
    int a, b;

public:

    // Destructor
    // Automatically called when an object goes out of scope
    // or the program terminates.
    ~logic()
    {
        cout << "Destructor Called" << endl;
    }

    // Default Constructor
    // Automatically called whenever an object is created.
    logic()
    {
        cout << "Constructor Called" << endl;
    }
};

int main()
{
    // Object Creation
    //
    // When 'obj' is created:
    // Constructor Called
    logic obj;

    // When 'obj1' is created:
    // Constructor Called
    logic obj1;

    // No explicit function call is needed.
    // Constructors are invoked automatically.

    // When main() ends:
    //
    // obj1 is destroyed first
    // Destructor Called
    //
    // obj is destroyed second
    // Destructor Called

    return 0;
}

/*
======================== OUTPUT ========================

Constructor Called
Constructor Called
Destructor Called
Destructor Called

========================================================

Execution Flow:

1. logic obj;
   -> Constructor Called

2. logic obj1;
   -> Constructor Called

3. End of main()

4. obj1 destroyed
   -> Destructor Called

5. obj destroyed
   -> Destructor Called

========================================================

Important Notes:

1. Constructor
   - Same name as class.
   - No return type.
   - Called automatically when object is created.
   - Used for initialization.

2. Destructor
   - Same name as class prefixed with '~'.
   - No return type.
   - No parameters.
   - Called automatically when object is destroyed.
   - Used for cleanup tasks.

3. Constructor Calling Order

   logic obj;
   logic obj1;

   Output:
   Constructor Called
   Constructor Called

4. Destructor Calling Order

   Objects are destroyed in reverse order.

   obj1 -> destroyed first
   obj  -> destroyed second

*/