#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Description:
 *     * This program prints the lowercase alphabet, excluding 'q' and 'e',
 *      * followed by a new line using only the putchar function twice.
 *       *
 *        * Return: Always 0 (Success)
 *         */
int main(void)
{
	    char letter = 'a';

	        while (letter <= 'z')
			    {
				            if (letter != 'e' && letter != 'q')
						                putchar(letter);
					            letter++;
						        }

		    putchar('\n');  /* Print a newline after the alphabets */
		        return 0;
}

