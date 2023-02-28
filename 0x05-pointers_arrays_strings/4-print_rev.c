#include "main.h"
/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: The pointer
 */

void print_rev(char *s)
{
	int counter = 0;
	int i, n;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}	

	for (n = (counter -1); 0 >= 0; n--)
	{
		_putchar(s[n]);
	}	
	_putchar('\n');
}
