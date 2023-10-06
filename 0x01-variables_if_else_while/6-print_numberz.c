#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Description:
 *     * This program prints all single-digit numbers of base 10
 *      * starting from 0, followed by a new line, using only putchar.
 *       * It achieves this without using variables of type char.
 *        *
 *         * Return: Always 0 (Success)
 *          */
int main(void)
{
		int i;

			for (i = 48; i <= 57; i++)  /* ASCII values for '0' to '9' */
					{
								putchar(i);
									}

				putchar('\n');  /* Print a newline after the digits */
					return 0;
}

