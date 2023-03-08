#include "main.h"
/**
 * _strlen_recursion - function that returns a length of a string
 * @s: gets the length of the string
 *
 * Return: Pointer that has the length
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length = length + _strlen_recursions(s + 1);
	}

	return (length);
}
