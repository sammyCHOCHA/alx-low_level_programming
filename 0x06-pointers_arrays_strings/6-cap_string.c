#include "main.h"

/**
 *  * is_separator - Checks if a character is a word separator.
 *   * @c: The character to check.
 *    * Return: 1 if it's a separator, 0 otherwise.
 *     */
int is_separator(char c)
{
	    char separators[] = " \t\n,;.!?\"(){}";
	        int i;

		    for (i = 0; separators[i] != '\0'; i++) {
			            if (c == separators[i]) {
					                return 1;
							        }
				        }
		        return 0;
}

/**
 *  * cap_string - Capitalizes all words in a string.
 *   * @str: The string to be capitalized.
 *    * Return: A pointer to the resulting string.
 *     */
char *cap_string(char *str)
{
	    int capitalize = 1;  /* Start by capitalizing the first character */

	        while (*str != '\0') {
			        if (is_separator(*str)) {
					            capitalize = 1;
						            } else if (capitalize && *str >= 'a' && *str <= 'z') {
								                *str = *str - ('a' - 'A');
										            capitalize = 0;
											            }
				        str++;
					    }

		    return str;
}

