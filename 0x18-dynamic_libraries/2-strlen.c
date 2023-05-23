#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: pointer of type char
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
