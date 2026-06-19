#include<iostream>
using namespace std;

int main()
{
    // ====================================================
    // AUTO KEYWORD + C-STRING + POINTER ARITHMETIC DEMO
    // ====================================================

    // Normal integer variable
    // Compiler explicitly knows that 'a' is an integer.
    int a = 10;

    // ====================================================
    // AUTO KEYWORD
    // ====================================================
    // 'auto' allows the compiler to automatically
    // determine the variable type.
    //
    // Here:
    // "456" is a string literal.
    //
    // Therefore:
    // auto c = "456";
    //
    // becomes:
    //
    // const char* c = "456";
    //
    // c stores the address of the first character.
    // ====================================================

    auto c = "456";

    /*
        Memory Representation

        Address      Value
        -------------------
        1000         '4'
        1001         '5'
        1002         '6'
        1003         '\0'
        -------------------

        c = 1000
    */

    // ====================================================
    // POINTER ARITHMETIC
    // ====================================================
    //
    // c + 10 means:
    //
    // Move pointer 10 positions ahead.
    //
    // If:
    // c = 1000
    //
    // then:
    // c + 10 = 1010
    //
    // cout treats the result as a C-string and
    // starts printing characters from address 1010.
    //
    // Since address 1010 is outside the original
    // string, the behavior becomes Undefined Behavior.
    // ====================================================

    cout << c + 10;

    return 0;
}

/*

====================================================
TOPICS COVERED
====================================================

1. AUTO KEYWORD
2. TYPE DEDUCTION
3. STRING LITERAL
4. C-STRING
5. POINTER
6. POINTER ARITHMETIC
7. MEMORY REPRESENTATION
8. UNDEFINED BEHAVIOR

====================================================
1. AUTO KEYWORD
====================================================

auto x = 10;
Type -> int

auto y = 3.14;
Type -> double

auto z = 'A';
Type -> char

auto b = true;
Type -> bool

auto s = "Hello";
Type -> const char*

Compiler automatically deduces the type.


====================================================
2. STRING LITERAL
====================================================

"456"

is NOT std::string.

Actual Type:

const char[4]

because memory contains:

'4'
'5'
'6'
'\0'

The last character is called the
NULL TERMINATOR.


====================================================
3. C-STRING
====================================================

Examples:

char str[] = "456";

or

const char* str = "456";

A C-string always ends with:

'\0'

which marks the end of the string.


====================================================
4. POINTER
====================================================

A pointer stores an address.

Example:

int x = 10;

int* ptr = &x;

Memory:

Address      Value
------------------
1000         10
------------------

ptr = 1000


====================================================
5. POINTER ARITHMETIC
====================================================

auto c = "456";

Memory:

4  5  6  \0
^

c


----------------------------------------------------

cout << c;

Output:
456

----------------------------------------------------

cout << c + 1;

Memory:

4  5  6  \0
   ^

Output:
56

----------------------------------------------------

cout << c + 2;

Memory:

4  5  6  \0
      ^

Output:
6

----------------------------------------------------

cout << c + 3;

Points to '\0'

Output:
(empty)


====================================================
6. WHY DOES c + 10 PRINT NOTHING?
====================================================

Code:

auto c = "456";

cout << c + 10;

Many beginners expect:

- Error
- Garbage output

But often the program prints NOTHING.

Why?

----------------------------------------------------
STEP 1
----------------------------------------------------

auto c = "456";

Compiler converts it to:

const char* c = "456";

Memory:

Address      Value
-------------------
1000         '4'
1001         '5'
1002         '6'
1003         '\0'
-------------------


----------------------------------------------------
STEP 2
----------------------------------------------------

c + 10

moves pointer 10 positions forward.

c      = 1000

c + 10 = 1010


----------------------------------------------------
STEP 3
----------------------------------------------------

cout receives:

(const char*)1010

and treats it as a C-string.

It starts printing characters until
it encounters '\0'.


====================================================
POSSIBLE RESULTS
====================================================

Case 1:

Address 1010 contains '\0'

Output:
(blank)

This is what happens on many systems.


----------------------------------------------------

Case 2:

Address 1010 contains random data

Output:
ABCXYZ...


----------------------------------------------------

Case 3:

Invalid memory access

Output:
Program Crash


====================================================
IMPORTANT CONCEPT
====================================================

The statement:

cout << c + 10;

DOES EXECUTE.

But the result is Undefined Behavior.

Undefined Behavior means the C++
standard gives NO guarantee about
what will happen.

Possible outcomes:

1. Blank Output
2. Garbage Output
3. Program Crash
4. Random Behavior

All are valid.


====================================================
DIFFERENCE BETWEEN
C-STRING AND std::string
====================================================

C-String:

const char* s = "Hello";

Pros:
- Fast
- Low memory usage

Cons:
- Hard to manipulate
- Unsafe


std::string:

string s = "Hello";

Pros:
- Easy operations
- Safer
- Rich functionality


Example:

string s = "456";

cout << s + "10";

Output:
45610


====================================================
INTERVIEW QUESTIONS
====================================================

Q1. What is auto in C++?

Ans:
auto allows the compiler to
automatically deduce the variable type.


----------------------------------------------------

Q2. What is the type of:

auto c = "456";

Ans:

const char*


----------------------------------------------------

Q3. What is a C-string?

Ans:

A sequence of characters terminated
by a NULL character ('\0').


----------------------------------------------------

Q4. What is pointer arithmetic?

Ans:

Adding or subtracting integers from
a pointer moves it to another memory
location.


----------------------------------------------------

Q5. Why does:

cout << c + 10;

sometimes print nothing?

Ans:

Because c + 10 points outside the
actual string.

cout tries to print a string from an
invalid memory location, resulting in
Undefined Behavior.

If that memory contains '\0',
nothing is printed.


====================================================
FILE NAME
====================================================

04_auto_keyword_and_pointer_arithmetic.cpp

or

auto_and_cstring_concepts.cpp

====================================================

*/