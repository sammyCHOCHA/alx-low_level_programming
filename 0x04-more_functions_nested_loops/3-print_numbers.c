#include "main.h"
#include <unistd.h>

/**
 *  * _putchar - Writes a character to the standard output (stdout)
 *   * @c: The character to write
 *    *
 *     * Return: On success 1 is returned. On error, -1 is returned,
 *      * and errno is set appropriately.
 *       */
int _putchar(char c)
{
	    return write(1, &c, 1);
}

/**
 *  * print_numbers - Prints numbers from 0 to 9 followed by a new line
 *   */
void print_numbers(void)
{
	    char digit;

	        for (digit = '0'; digit <= '9'; digit++)
			    {
				            _putchar(digit);
					        }
		    _putchar('\n');
}

