#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  * main - Entry point
 *   *
 *    * Description:
 *     * This program generates a random number and prints whether
 *      * the number is positive, negative, or zero.
 *       *
 *        * Return: Always 0 (Success)
 *         */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;

					printf("%d ", n);

						if (n > 0)
									printf("is positive\n");
							else if (n < 0)
										printf("is negative\n");
								else
											printf("is zero\n");

									return (0);
}

