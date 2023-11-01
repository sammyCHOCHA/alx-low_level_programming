#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
    int i, j, result;

    for (i = 0; i <= 9; i++)
    {
        _putchar('0'); /* Print the first number in each row */
        for (j = 1; j <= 9; j++)
        {
            _putchar(',');
            _putchar(' ');

            result = i * j;

            if (result <= 9)
                _putchar(' '); /* Print a space for single-digit numbers */

            if (result >= 10)
            {
                _putchar(result / 10 + '0'); /* Print the tens digit */
                _putchar(result % 10 + '0'); /* Print the ones digit */
            }
            else
            {
                _putchar(result + '0'); /* Print a single-digit number */
            }
        }
        _putchar('\n'); /* Move to the next line at the end of each row */
    }
}

