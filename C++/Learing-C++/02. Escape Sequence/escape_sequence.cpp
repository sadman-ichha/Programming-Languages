#include <iostream>

int main()
{
    // Output using various escape sequences

    std::cout << "1. Hello, World!\n \n";
    // Line 1: Output "Hello, World!" and

    std::cout << "2. This is a new line.\tTabbed here.\n\n";
    // Line 2: Output a string with a new line and a tab.

    std::cout << "3. Double quote: \"\n\n";
    // Line 3: Output a string containing a double quote.

    std::cout << "4. Single quote: \'\n\n";
    // Line 4: Output a string containing a single quote.

    std::cout << "5. Backslash: \\\n\n";
    // Line 5: Output a string containing a backslash.

    std::cout << "6. Backspace:\bBackspace\n\n";
    // Line 6: Output a string with a backspace character.

    std::cout << "7. Carriage Return:\rOverwritten\n\n";
    // Line 7: Output a string with a carriage return, overwriting part of the text.

    std::cout << "8. Form Feed:\fNew Page\n\n";
    // Line 8: Output a string with a form feed.

    std::cout << "9. Vertical Tab:\vVertical\tTab\n\n";
    // Line 9: Output a string with a vertical tab and a horizontal tab.

    std::cout << "10. Alert (Bell):\aBeep!\n\n";
    // Line 10: Output a string with an alert (bell) character, producing a beep.

    std::cout << "11. Null Character: \0End\n\n";
    // Line 11: Output a string with a null character, terminating the string.

    std::cout << "12. Hexadecimal Escape Sequence: \x48\x65\x6C\x6C\x6F\n\n";
    // Line 12: Output a string using a hexadecimal escape sequence, resulting in "Hello".

    return 0;
}
