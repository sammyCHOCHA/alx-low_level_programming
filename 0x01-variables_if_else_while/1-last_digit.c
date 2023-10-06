#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  * main - Entry point
 *   *
 *    * Description:
 *     * This program generates a random number and prints the last digit of the number,
 *      * along with whether it's greater than 5, less than 6 and not 0, or 0.
 *       *
 *        * Return: Always 0 (Success)
 *         */
int main(void)
{
	    int n;
	        int last_digit;

		    srand(time(0));
		        n = rand() - RAND_MAX / 2;
			    last_digit = n % 10;

			        printf("Last digit of %d is %d and is ", n, last_digit);

				    if (last_digit > 5)
					            printf("greater than 5\n");
				        else if (last_digit == 0)
						        printf("0\n");
					    else
						            printf("less than 6 and not 0\n");

					        return (0);
}

