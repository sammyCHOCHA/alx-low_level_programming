#include "main.h"
/**
 *  * leet - Encodes a string into 1337.
 *   * @str: The string to be encoded.
 *    * Return: A pointer to the resulting string.
 *     */
char *leet(char *str)
{
	    int i, j;
	        char leet_map[] = "aAeEoOtTlL";
		    char leet_replacements[] = "4433007711";

		        for (i = 0; str[i] != '\0'; i++)
				    {
					            for (j = 0; leet_map[j] != '\0'; j++)
							            {
									                if (str[i] == leet_map[j])
												            {
														                    str[i] = leet_replacements[j];
																                    break; /* Exit the inner loop when a replacement is made
					                  */														      }
											        }
						        }

			    return str;
}

