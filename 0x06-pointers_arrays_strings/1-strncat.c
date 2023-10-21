#include "main.h"

/**
 *  * _strncat - Concatenates two strings with a specified number of characters.
 *   * @dest: The destination string.
 *    * @src: The source string to be concatenated.
 *     * @n: The maximum number of characters from src to concatenate.
 *      * Return: A pointer to the resulting string dest.
 *       */
char *_strncat(char *dest, char *src, int n)
{
	    char *result = dest;

	        while (*dest != '\0')
			        dest++;

		    while (*src != '\0' && n > 0) {
			            *dest = *src;
				            dest++;
					            src++;
						            n--;
							        }

		        *dest = '\0';

			    return result;
}

