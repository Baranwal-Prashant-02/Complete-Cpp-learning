/*
===============================================================================
INHERITANCE IN C++
===============================================================================

Definition:
-----------
Inheritance is the mechanism by which one class acquires the
properties (data members) and behaviors (member functions)
of another class.

Parent Class:
-------------
Base Class / Super Class

Child Class:
------------
Derived Class / Sub Class

Relationship:
-------------
Inheritance represents an "IS-A" relationship.

Example:
---------
Car IS-A Vehicle
Dog IS-A Animal

===============================================================================
TYPES OF INHERITANCE
===============================================================================

1. Single Inheritance
   A --> B

2. Multilevel Inheritance
   A --> B --> C

3. Multiple Inheritance
   A
    \
     ---> C
    /
   B

4. Hierarchical Inheritance
         A
       / | \
      B  C  D

5. Hybrid Inheritance
   Combination of two or more inheritance types

===============================================================================
NOTE
===============================================================================

All inheritance structures are built using single inheritance 
*/


/*

//relationship type =>"Has-A" relationship->Aggregration,  "Is-A" relationship->inheritance

===============================================================================
MEMORY TRICK
===============================================================================

PUBLIC INHERITANCE
public    → public
protected → protected

PROTECTED INHERITANCE
public    → protected
protected → protected

PRIVATE INHERITANCE
public    → private
protected → private

private always remains inaccessible to child class.

===============================================================================
*/