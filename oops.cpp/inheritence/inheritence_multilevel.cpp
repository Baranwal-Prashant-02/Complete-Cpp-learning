#include<iostream>
using namespace std;

// Base Class
class A
{
protected:
    // Protected member function
    // Accessible only inside A and its derived classes
    void logic()
    {
        cout << "logic A" << endl;
    }
};

// Derived Class B
class B : public A
{
public:
    void logic1()
    {
        cout << "logic1 B" << endl;
    }
};

// Derived Class C
class c : public B
{
public:
    void logic2()
    {
        // Accessing protected member of A
        logic();

        cout << "logic2 C" << endl;
    }
};

int main()
{
    c obj;

    obj.logic1(); // Public function of B
    obj.logic2(); // Public function of C

    // obj.logic(); // Error: protected member

    return 0;
}


// logic1 B
// logic A
// logic2 C