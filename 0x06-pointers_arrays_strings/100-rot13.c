#include "main.h"
/**
 *  * rot13 - Encodes a string using ROT13.
 *   * @str: The string to be encoded.
 *    * Return: A pointer to the resulting string.
 *     */
char *rot13(char *str)
{
	    int i;
	        char letter;
		    char upper, lower;

		        for (i = 0; str[i] != '\0'; i++)
				    {
					            letter = str[i];

						            if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
								            {
										                upper = (letter >= 'A' && letter <= 'Z');
												            lower = (letter >= 'a' && letter <= 'z');

													                if (upper)
																            {
																		                    if (letter >= 'N')
																					                        str[i] -= 13;
																				                    else
																							                        str[i] += 13;
																						                }
															            else if (lower)
																	                {
																				                if (letter >= 'n')
																							                    str[i] -= 13;
																						                else
																									                    str[i] += 13;
																								            }
																            }
							        }

			    return str;
}

