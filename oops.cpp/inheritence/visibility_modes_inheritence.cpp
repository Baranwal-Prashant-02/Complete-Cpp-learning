#include<iostream>
using namespace std;

class A
{
protected:
    // Protected member
    // Accessible inside A and derived classes
    void logic()
    {
        cout << "protected A" << endl;
    }

public:
    // Public member
    // Accessible from anywhere
    void logic1()
    {
        cout << "public A" << endl;
    }
};

class B : public A  // Public Inheritance
{
public:
    void logic2()
    {
        // Protected member of A can be used inside B
        logic();

        cout << "public B" << endl;
    }
};

int main()
{
    B obj;

    obj.logic1();  // Accessible because public inheritance keeps public members public
    obj.logic2();

    // obj.logic(); // Error: protected member

    return 0;
}

// public A
// protected A
// public B