/* _putchar.c */

#include "main.h"
#include <unistd.h>

/**
 *  * _putchar - Print a character to stdout
 *   * @c: The character to print
 *    */
void _putchar(char c) {
	    write(1, &c, 1);
}

