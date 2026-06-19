/*
auto x = 100;      // int
auto y = 'A';      // char
auto z = 3.14;     // double
auto p = true;     // bool
auto s = "Hello";  // const char*
*/


#include<iostream>
using namespace std;

int main()
{
    int a = 10;

    // auto deduces the type automatically
    // 'a' is a character literal
    // Therefore c becomes of type char
    auto c = 'a';

    // Character 'a' has ASCII value 97
    // c + 10 = 97 + 10 = 107
    cout << c + 10;

    return 0;
}

/*
#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    
    // "456" is a string literal
    // auto deduces c as const char*
    // c stores the address of the first character ('4')
    auto c = "456";
    
    // c + 10 performs pointer arithmetic
    // It moves the pointer 10 positions ahead
    // The string has only 4 characters: '4', '5', '6', '\0'
    // Accessing beyond this range causes Undefined Behavior
    cout << c + 10;
    
    return 0;
}
*/