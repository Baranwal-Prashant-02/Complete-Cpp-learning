// Macro: A preprocessor directive used for text substitution
// #define replaces text before compilation
#include<bits/stdc++.h>
using namespace std;
// Single-line macro
// #define PRINT printf("welcome in mpec\n")   //uncomment and run for output

/*
here PRINT;
is replaced by
printf("welcome in mpec\n");
*/

// Multi-line macro
#define PRINT printf("welcome in mpec\n");\
              printf("good morning\n");\
              printf("hello dear\n");\
              printf("kaise ho")

// '\' is used to continue the macro on the next line
// Macros are expanded before compilation
// No memory is allocated for a macro
// No type checking is performed

int main()
{
    PRINT;
    return 0;
}