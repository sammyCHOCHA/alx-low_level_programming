#include "main.h"
#include <stdio.h>

/**
 *  * infinite_add - Adds two numbers stored as strings
 *   * @n1: The first number
 *    * @n2: The second number
 *     * @r: The buffer to store the result
 *      * @size_r: The size of the buffer
 *       *
 *        * Return: A pointer to the result, or 0 if the result cannot be stored
 *         */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	    int len1, len2, max_len, digit1, digit2, sum, carry = 0;

	        for (len1 = 0; n1[len1] != '\0'; len1++)
			        ;
		    for (len2 = 0; n2[len2] != '\0'; len2++)
			            ;
		        max_len = (len1 > len2) ? len1 : len2;

			    if (max_len + 1 >= size_r)
				            return (0);

			        r[max_len + 1] = '\0';

				    while (len1 > 0 || len2 > 0)
					        {
							        len1--;
								        len2--;

									        if (len1 >= 0)
											            digit1 = n1[len1] - '0';
										        else
												            digit1 = 0;

											        if (len2 >= 0)
													            digit2 = n2[len2] - '0';
												        else
														            digit2 = 0;

													        sum = digit1 + digit2 + carry;

														        if (sum >= 10)
																        {
																		            carry = 1;
																			                sum -= 10;
																					        }
															        else
																	        {
																			            carry = 0;
																				            }

																        r[max_len] = (sum + '0');
																	        max_len--;
																		    }

				        if (carry == 1)
						        r[max_len] = '1';

					    return (r + max_len);
}

