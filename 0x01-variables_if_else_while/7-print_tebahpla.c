#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Description:
 *     * This program prints the lowercase alphabet in reverse
 *      * followed by a new line using only putchar.
 *       *
 *        * Return: Always 0 (Success)
 *         */
int main(void)
{
		char letter = 'z'; /* Initialize letter with 'z', the last lowercase letter */

			while (letter >= 'a') /* Loop through the alphabet in reverse order */
					{
								putchar(letter); /* Print the current letter */
										letter--; /* Move to the previous letter */
											}

				putchar('\n');  /* Print a newline after the reversed alphabet */
					return (0);
}

