//Each object has its own memory
//Shallow copy copies pointer addresses, while deep copy allocates new memory and copies the actual data.
#include <iostream>
using namespace std;

class Test {
public:
    int* x;

    Test(int v) {
        x = new int(v);   // heap allocation
    }

    // Copy constructor (DEEP COPY)
    Test(const Test& t) {
        x = new int(*t.x);   // new memory
    }

    ~Test() {
        cout << "Deleting memory at: " << x << endl;
        delete x;            // safe
    }
};

int main() {
    Test t1(10);
    Test t2 = t1;            // DEEP COPY

    *t1.x = 99;              // does NOT affect t2

    cout << "t1 = " << *t1.x << endl;
    cout << "t2 = " << *t2.x << endl;

    return 0;
}


/*
t1 = 99
t2 = 10
Deleting memory at: 0x259c5331460  
Deleting memory at: 0x259c5331440  // here we see different m/m location(in deep copy "Each object has its own memory" )
*/
