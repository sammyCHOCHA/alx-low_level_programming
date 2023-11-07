#include "main.h"

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to be written
 *
 * Return: On success 1, on error -1, and set errno appropriately.
 */
int _putchar(char c);

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: Pointer to a string.
 */
void print_rev(char *s)
{
    int length = 0;

    while (*s)
    {
        length++;
        s++;
    }

    s--;  /* Move the pointer back to the last character */

    while (length > 0)
    {
        _putchar(*s);
        s--;
        length--;
    }

    _putchar('\n');
}

