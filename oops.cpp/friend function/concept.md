A friend function is a non-member function that is allowed to access the private and protected members of a class.
A friend is a function or class that is allowed to access private and protected members of another class.

📌 Normally, private data is hidden.
📌 Friend is not inherited.
📌 friend breaks encapsulation intentionally (with permission).


Friend Function: A friend function is a non-member function that can access private members of a class.
Friend Class: A friend class is a class whose member functions can access private members of another class.

2️⃣ Why do we need friend?
When two classes/functions must share internal data
When operator overloading needs access to private members
When implementing tight coupling between related classes



🔑 Key Points
✔ Friend function is not a class member
✔ It is called like a normal function
✔ It can access private data

NOTE: "friend is NOT a part of inheritance, but it CAN be used with inherited classes when explicitly declared."



Inheritance means: is-a relationship
Automatic access based on public / protected / private
Access flows from base → derived

friend means: trust relationship
Manual permission
Access flows only where declared 📌 Friendship does NOT follow inheritance rules.

NOTE: "Friend is not part of inheritance and friendship is not inherited. 
       However, a derived class or function can access private members of a base class 
       if it is explicitly declared as a friend. This is used when tight coupling or special access is required."


🧠 Memory Trick:
Inheritance → relationship based access
Friend → permission based access

Inheritance → automatic
Friend → explicit

Inheritance → follows hierarchy
Friend → independent of hierarchy


ADVANCED CONCEPTS:

1️⃣ Friendship is NOT Transitive

If A is friend of B, and B is friend of C,
❌ A is NOT friend of C
example code:- 

class B;

class A {
    friend class B;
};

class C {
    friend class A;
};

class B {
    // ❌ Cannot access C's private members
};

ke point : 📌 Friendship must be declared explicitly



2️⃣ Friendship is NOT Mutual

If A is friend of B,
❌ B is NOT automatically friend of A

example code:-
class A {
    int x = 10;
    friend class B;
};

class B {
public:
    void show(A a) {
        cout << a.x;   // ✅ allowed
    }
};

key point: A cannot access private members of B unless declared



/*
8️⃣ Friend Has No this Pointer: Because it is not a member
example:
friend void fun();
void fun() {
    // ❌ cannot use this pointer
}

*/


🔥 Interview One-Liners (Very Useful):

❓ Is friend inherited?
➜ ❌ No

❓ Is friendship mutual?
➜ ❌ No

❓ Is friendship transitive?
➜ ❌ No

❓ Is friend a member of class?
➜ ❌ No

❓ Why use friend?
➜ To allow controlled access to private data when tight coupling is required



