#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: pointer of type char
 */
int _strlen(char *s)
{
	int length = 0;

	while (string[length] != '\0') length++;
	return length;
}
