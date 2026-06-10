/*
============================================================
TOPIC: RULES FOR NAMING VARIABLES IN C++
============================================================

A variable name is also called an IDENTIFIER.
It is used to identify a memory location.

------------------------------------------------------------
1. VARIABLE NAME MUST START WITH:
------------------------------------------------------------
- A letter (a–z or A–Z)
- OR an underscore (_)

✔ Valid:
    int count;
    int _total;
    int studentCount;

❌ Invalid:
    int 1count;     // cannot start with digit
    int @value;     // special characters not allowed

------------------------------------------------------------
2. DIGITS CAN BE USED (BUT NOT AT START)
------------------------------------------------------------

✔ Valid:
    int marks1;
    int student2Count;

❌ Invalid:
    int 2marks;

------------------------------------------------------------
3. ALLOWED CHARACTERS(only underscore(_) and doller($) is allowed)
------------------------------------------------------------
- Letters (a–z, A–Z)
- Digits (0–9)
- Underscore (_)

✔ Valid:
    int total_sum;
    int student_marks_1;

❌ Invalid:
    int total-sum;   // '-' not allowed
    int total sum;   // space not allowed
    int total@sum;   // '@' not allowed

------------------------------------------------------------
4. C++ KEYWORDS CANNOT BE USED
------------------------------------------------------------
Keywords have predefined meaning in C++.

❌ Invalid:
    int int;
    int return;
    int while;

✔ Valid:
    int returnValue;
    int whileCount;

------------------------------------------------------------
5. VARIABLE NAMES ARE CASE-SENSITIVE
------------------------------------------------------------

int marks;
int Marks;

- These are TWO DIFFERENT variables.
- C++ treats uppercase and lowercase differently.

------------------------------------------------------------
6. SPACES ARE NOT ALLOWED
------------------------------------------------------------

❌ Invalid:
    int total marks;

✔ Correct:
    int total_marks;

------------------------------------------------------------
7. LENGTH OF VARIABLE NAME
------------------------------------------------------------
- No fixed length limit (compiler dependent)
- Prefer meaningful and readable names

✔ Good practice:
    int totalStudents;
    double averageMarks;

❌ Poor practice:
    int x;   // unclear meaning

------------------------------------------------------------
8. UNDERSCORE RULE (IMPORTANT)
------------------------------------------------------------
- Single underscore (_) is allowed
- Double underscore (__) is reserved for compiler/system
- Avoid using names starting with __

------------------------------------------------------------
EXAM ONE-LINE GOLDEN RULE ⭐
------------------------------------------------------------
A variable name must start with a letter or underscore,
contain only letters, digits, or underscores,
and must not be a C++ keyword.

============================================================
END OF NOTES
============================================================
*/

#include <iostream>
using namespace std;

int main()
{
    int totalStudents = 50;
    int student_marks_1 = 80;

    cout << totalStudents << endl;//50
    cout << student_marks_1 << endl;//80

    return 0;
}
