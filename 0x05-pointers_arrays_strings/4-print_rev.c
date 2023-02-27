#include "main.h"
/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: The pointer
 */

void print_rev(char *s)
{
	int length = 0, i;

	while(s[i++])
		length++;

	for (i = length - 1; 0 <= i ; i--)
	{
		_putchar(s[i]);	
	}

	_putchar('\n');
}
