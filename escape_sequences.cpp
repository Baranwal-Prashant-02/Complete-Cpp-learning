/*
Escape sequences are special character combinations starting with \ used to 
represent non-printable or special characters in strings.
*/
#include <iostream>
using namespace std;

int main()
{
    // \n → New line
    cout << "Hello\nWorld" << endl;
    
    // \t → Horizontal tab (adds spacing)
    cout << "Name:\tPrashant" << endl;

    // \\ → Prints a backslash
    cout << "Path: C:\\Program Files\\C++" << endl;

    // \" → Prints double quote
    cout << "She said, \"C++ is powerful\"" << endl;

    // \' → Prints single quote
    cout << "It\'s a C++ program" << endl;

    // \r → Carriage return (cursor moves to start of line)
    cout << "Hello\rWorld" << endl;
    // Output: World (Hello gets overwritten)

    // \b → Backspace (removes one character)
    cout << "ABC\bD" << endl;
    // Output: ABD

    // \a → Alert / beep sound (may or may not work on all systems)
    cout << "Alert!\a" << endl;

    // \f → Form feed (page break, mostly ignored in modern consoles)
    cout << "Line1\fLine2" << endl;

    // \v → Vertical tab (rarely visible)
    cout << "A\vB" << endl;

    // \0 → Null character (string terminator)
    cout << "Null\0Character" << endl;
    // Output stops at \0

    // \? → Prints question mark (avoids trigraph issues)
    cout << "Question\?" << endl;

    // \nnn → Octal value (character by ASCII code)
    cout << "Octal A: \101" << endl;   // 101 (octal) = 65 (decimal) = 'A'

    // \xhh → Hexadecimal value (character by ASCII code)
    cout << "Hex A: \x41" << endl;     // 41 (hex) = 65 (decimal) = 'A'

    return 0; // Program ends
}
