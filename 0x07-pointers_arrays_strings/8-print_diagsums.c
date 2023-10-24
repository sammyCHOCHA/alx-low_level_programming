#include "main.h"
#include <stdio.h>

/**
 *  * print_diagsums - prints the sum of the two diagonals of a square matrix
 *   * @a: the square matrix of integers
 *    * @size: the size of the square matrix
 *     *
 *      * Description: This function calculates and prints the sum of the main diagonal
 *       * and secondary diagonal elements in a square matrix.
 *        */
void print_diagsums(int *a, int size)
{
	    int i;
	        int sum_diag1 = 0;
		    int sum_diag2 = 0;

		        for (i = 0; i < size; i++)
				    {
					            sum_diag1 += a[i * size + i]; /* Sum of the main diagonal elements */
						            sum_diag2 += a[i * size + (size - i - 1)]; /* Sum of the secondary diagonal elements */
							        }

			    printf("%d, %d\n", sum_diag1, sum_diag2);
}

