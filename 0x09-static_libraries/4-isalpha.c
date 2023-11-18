#include "main.h"

/**
*_isalpha - This  checks for alphabetic character
*@c: This is the character to be checked
*Return: This return 1 if c is a letter, 0 otherwise
*/

int _isalpha(int c)

	{
		return	((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
	}
