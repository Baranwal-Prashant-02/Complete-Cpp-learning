/*
Method Overloading:
Multiple functions have the same name but different parameter lists.

Characteristics ==>
    Same function name.
    Different number/type/order of parameters.
    Compile-time polymorphism.
    Happens within the same class (or inherited scope).

*/



#include<bits/stdc++.h>
using namespace std;

/* Method Overloading can be performed in three ways:
   1. Number of arguments
   2. Type of arguments
   3. Order of arguments
*/

void perimeter(int a){
    printf("Perimeter of square is %d\n", 4 * a);
}

void perimeter(int a, float b){
    printf("Function with (int, float)\n");
}

void perimeter(float b, int a){
    printf("Function with (float, int)\n");
}

void perimeter(int a, int b, int c){
    printf("Perimeter of triangle is %d\n", a + b + c);
}

int main()
{
    perimeter(3);         // Calls perimeter(int)
    perimeter(3, 4.0f);  // Calls perimeter(int, float)
    perimeter(4.0f, 3);  // Calls perimeter(float, int)
    perimeter(3, 4, 5);  // Calls perimeter(int, int, int)

    return 0;
}

/*
Perimeter of square is 12
Function with (int, float)
Function with (float, int)
Perimeter of triangle is 12
*/