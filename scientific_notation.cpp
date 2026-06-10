/*
============================================================
TOPIC: SCIENTIFIC vs FIXED NOTATION IN C++
============================================================

IMPORTANT IDEA:
---------------
- The value stored in a variable NEVER changes.
- `fixed` and `scientific` only change HOW `cout` prints the value.
- These are called OUTPUT FORMAT MANIPULATORS.

------------------------------------------------------------
1. VARIABLE IN MEMORY
------------------------------------------------------------

double x = 1234567.89;

- The value 1234567.89 is stored in memory in binary form.
- No formatting (fixed/scientific) affects memory.
- Formatting affects ONLY output.

------------------------------------------------------------
2. STREAM STATE (VERY IMPORTANT)
------------------------------------------------------------

- `cout` has an internal formatting state.
- When we use `fixed` or `scientific`,
  we MODIFY the state of `cout`.

- Once set, the format REMAINS ACTIVE
  until it is changed again.

------------------------------------------------------------
3. FIXED NOTATION
------------------------------------------------------------

fixed tells `cout`:
- Print number in normal decimal form
- Show 6 digits AFTER decimal by default

Example output:
1234567.890000

------------------------------------------------------------
4. SCIENTIFIC NOTATION
------------------------------------------------------------

scientific tells `cout`:
- Print number in scientific notation
- Use mantissa × 10^exponent
- Use 'e' to represent exponent

Example output:
1.234568e+06

------------------------------------------------------------
5. EXECUTION FLOW (LINE BY LINE)
------------------------------------------------------------

cout << fixed << x;

Step 1: Change cout format to FIXED
Step 2: Print x using FIXED format

cout << scientific << x;

Step 1: Change cout format to SCIENTIFIC
Step 2: Print x using SCIENTIFIC format

------------------------------------------------------------
6. VALUE VS REPRESENTATION
------------------------------------------------------------

x = 1234567.89   (always same)

Fixed view      → 1234567.890000
Scientific view → 1.234568e+06

------------------------------------------------------------
ONE-LINE GOLDEN RULE ⭐
------------------------------------------------------------
`fixed` and `scientific` change the OUTPUT FORMAT, not the VALUE.
============================================================
END OF NOTES
============================================================
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x = 1234567.89;

    // Print using fixed notation
    cout << "Fixed      : " << fixed << x << endl;

    // Change cout format to scientific notation
    cout << "Scientific : " << scientific << x << endl;

    // Switch back to fixed (proof that value never changed)
    cout << "Fixed again: " << fixed << x << endl;


    cout << "scientific value with precision 3 : "<< scientific << setprecision(3) << x << endl;

    return 0;
}

/*
Fixed      : 1234567.890000
Scientific : 1.234568e+06
Fixed again: 1234567.890000
scientific value with precision 3 : 1.235e+06
*/