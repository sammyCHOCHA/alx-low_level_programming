#include "main.h"
#include  <stddef.h>
/**
 *  * _strstr - Locates a substring in a string.
 *   * @haystack: The string to search in.
 *    * @needle: The substring to search for.
 *     * Return: A pointer to the beginning of the located substring, or NULL if not found.
 *      */
char *_strstr(char *haystack, char *needle) {
	    while (*haystack) {
		            char *start = haystack;
			            char *sub_needle = needle;

				            while (*haystack && *sub_needle && *haystack == *sub_needle) {
						                haystack++;
								            sub_needle++;
									            }

					            if (!*sub_needle) {
							                return start;
									        }

						            haystack = start + 1;
							        }

	        return NULL;
}

