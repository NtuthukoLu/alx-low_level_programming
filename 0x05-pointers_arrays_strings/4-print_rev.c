#include "main.h"
/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: The pointer
 */

void print_rev(char *s)
{
	if (*s != '\n')
	{
		print_rev(s + 1);
		_putchar("%c",*s);
	}

	_putchar('\n');
}
