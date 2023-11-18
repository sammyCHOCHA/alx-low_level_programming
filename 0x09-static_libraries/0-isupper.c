#include "main.h"

/**
 * _isupper -To change characters to uppercase letters
 * @c: Variable to store  char to check
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
