#include "main.h"

/**
 * _memset - This Program fills a block of memory with a specific value
 * @s: The starting address of memory to be filled
 * @b: The desired value to be used
 * @n: The number of bytes to be changed
 *
 * Return: The change array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
