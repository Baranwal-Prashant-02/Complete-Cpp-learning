//case 2  
/*
PROTECTED INHERITANCE
public    → protected
protected → protected 
private   → inaccessible*/

#include<iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Base class function" << endl;
    }
};

class B : protected A { 
public:
    void display() {

        cout << "Derived class function" << endl;

        show();   // ✔ Allowed inside B
    }
};

int main() {

    B obj;

    obj.display();

    // obj.show();   ❌ ERROR because base public method get into protected method of derived class so it not directly accessed

    return 0;
}