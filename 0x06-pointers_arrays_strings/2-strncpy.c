#include "main.h"

/**
 *  * _strncpy - Copies a string with a specified number of characters.
 *   * @dest: The destination string.
 *    * @src: The source string to be copied.
 *     * @n: The maximum number of characters to copy from src.
 *      * Return: A pointer to the resulting string dest.
 *       */
char *_strncpy(char *dest, char *src, int n)
{
	    char *result = dest;

	        while (*src != '\0' && n > 0) {
			        *dest = *src;
				        dest++;
					        src++;
						        n--;
							    }

		    while (n > 0) {
			            *dest = '\0';  /* Fill the remaining characters in dest with null terminators.
						      */
				            dest++;
					            n--;
						        }

		        return result;
}

