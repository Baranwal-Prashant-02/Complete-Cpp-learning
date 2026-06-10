//Both objects share the same memory
//Shallow copy copies pointer addresses, while deep copy allocates new memory and copies the actual data.

#include <iostream>
using namespace std;

class Test {
public:
    int* x;

    Test(int v) {
        x = new int(v);   // heap allocation
    }

    // ❌ No copy constructor → shallow copy

    ~Test() {
        cout << "Deleting memory at: " << x << endl;
        delete x;         // double delete → crash
    }
};

int main() {
    Test t1(10);
    Test t2 = t1;         // SHALLOW COPY

    *t1.x = 99;           // affects t2 also

    cout << "t1 = " << *t1.x << endl;
    cout << "t2 = " << *t2.x << endl;

    return 0;             // 💥 crash here
}

/*
t1 = 99
t2 = 99
Deleting memory at: 0x21215531450
Deleting memory at: 0x21215531450  // here bug occur because same m/m space freed twice by distructor(in shallow copy "Both objects share the same memory")
*/