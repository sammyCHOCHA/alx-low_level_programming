#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Description:
 *     * This program prints the lowercase and uppercase alphabets
 *      * followed by a newline using only the putchar function three times.
 *       *
 *        * Return: Always 0 (Success)
 *         */
int main(void)
{
		char lowercase = 'a';
			char uppercase = 'A';

				while (lowercase <= 'z')
						{
									putchar(lowercase);
											lowercase++;
												}

					while (uppercase <= 'Z')
							{
										putchar(uppercase);
												uppercase++;
													}

						putchar('\n');  /* Print a newline after both alphabets */
							return 0;
}

