#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
 *
 * Description: This function prints the string @s using recursion.
 */
void _puts_recursion(char *s)
{
    if (*s == '\0') /* Base case: end of the string */
    {
        _putchar('\n'); /* Print a newline when the end of the string is reached */
        return;
    }

    _putchar(*s); /* Print the current character */
    _puts_recursion(s + 1); /* Move to the next character in the string */
}

