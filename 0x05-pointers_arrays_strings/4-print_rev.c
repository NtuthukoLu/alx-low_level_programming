#include "main.h"
/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: The pointer
 */

void print_rev(char *s)
{
	int length = _strlen(s);
	int middle = length / 2;
	char temp;
	int i;

	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;	
	}

	_putchar('\n');
}
