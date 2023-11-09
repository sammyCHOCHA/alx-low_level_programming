#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @s: The input string to be encoded
 *
 * Return: Pointer to the resulting encoded string
 */
char *rot13(char *s)
{
    char *ptr = s;
    char *rot13 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char *result = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    while (*s)
    {
        char *temp_rot13 = rot13;
        char *temp_result = result;

        if ((*s >= 'A' && *s <= 'Z') || (*s >= 'a' && *s <= 'z'))
        {
            while (*temp_rot13)
            {
                if (*s == *temp_rot13)
                {
                    *s = *temp_result;
                    break;
                }
                temp_rot13++;
                temp_result++;
            }
        }

        s++;
    }

    return ptr;
}

