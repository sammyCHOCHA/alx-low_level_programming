#include "main.h"

/**
 * _strncat - This function concatenate two strings
 * using at most n bytes from src
 * @dest: The entered value
 * @src: The  entered value
 * @n: The entered value
 * Return: The dest
 */


char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
