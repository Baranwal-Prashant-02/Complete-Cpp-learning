/*
============================================================
TOPIC: VARIABLES, MEMORY & BINARY REPRESENTATION (C++)
============================================================

1. WHAT IS A VARIABLE?
------------------------------------------------------------
- A variable is a NAME given to a memory location.
- It is used to store and access data in memory.

Each variable has:
  • Data type  → tells size & interpretation of data
  • Name       → identifier used in code
  • Value      → actual data stored
  • Address    → memory location where data is stored

IMPORTANT:
- The variable DOES NOT store the address.
- The variable STORES the VALUE.
- The address is associated with the variable by the system.

------------------------------------------------------------
2. EXAMPLE VARIABLE
------------------------------------------------------------

int students_enrolled = 50;

Meaning:
- int                 → data type (integer)
- students_enrolled   → variable name
- 50                  → value stored in memory

Compiler action:
- Reserves 4 bytes in memory
- Assigns a BASE ADDRESS to the variable
- Stores value 50 in binary form

------------------------------------------------------------
3. MEMORY ALLOCATION
------------------------------------------------------------

- int typically occupies 4 bytes (platform dependent)
- 1 byte = 8 bits
- 4 bytes = 32 bits

Memory is BYTE-ADDRESSABLE.

Illustrative memory layout (Little Endian system):

Address     Data (1 byte each)
--------------------------------
1000        00110010   ← 50 (Least Significant Byte)
1001        00000000
1002        00000000
1003        00000000

NOTE:
- The variable name refers to the BASE ADDRESS (1000).
- The system decides actual memory addresses.

------------------------------------------------------------
4. BINARY REPRESENTATION
------------------------------------------------------------

Decimal value:
50

Binary equivalent:
50 (decimal) = 110010 (binary)

Stored as 32-bit integer:
00000000 00000000 00000000 00110010

------------------------------------------------------------
5. HOW DOES CPU READ THE VALUE?
------------------------------------------------------------

- The variable name gives the BASE ADDRESS.
- The DATA TYPE tells the CPU how many bytes to read.

For int:
- Start from base address
- Read 4 consecutive bytes
- Combine them according to endianness
- Interpret the result as an integer

IMPORTANT:
- The CPU does NOT search for "50".
- It simply reads fixed number of bytes.

------------------------------------------------------------
6. ENDIANNESS (BYTE ORDER)
------------------------------------------------------------

Little Endian (most modern systems):
- Least significant byte stored first

Big Endian:
- Most significant byte stored first

Endianness is defined by CPU architecture.

------------------------------------------------------------
7. VALUE vs ADDRESS
------------------------------------------------------------

students_enrolled      → gives VALUE (50)
&students_enrolled     → gives ADDRESS (e.g. 0x7ffd...)

The address is NOT stored inside the variable.

------------------------------------------------------------
8. KEY EXAM POINTS (VERY IMPORTANT)
------------------------------------------------------------

- Variable stores VALUE, not address.
- Variable is a name for a memory location.
- Data type decides memory size.
- Memory is divided into bytes.
- CPU reads data based on data type.
- Binary representation is internal.

------------------------------------------------------------
ONE-LINE GOLDEN RULE ⭐
------------------------------------------------------------
A variable is a name given to a memory location that stores a value.
============================================================
END OF NOTES
============================================================
*/

#include <iostream>
using namespace std;

int main()
{
    int students_enrolled = 50;

    cout << "Students Enrolled: " << students_enrolled << endl;
    cout << "Memory Address    : " << &students_enrolled << endl;
    cout<<"-------- new data assigned -------"<<endl;
    students_enrolled =75;
    cout << "Memory Address    : " << &students_enrolled << endl;

    return 0;
}

/*
Students Enrolled: 50
Memory Address    : 0xb3295ffc7c
-------- new data assigned -------
Memory Address    : 0xb3295ffc7c
*/
