#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer
 * @c: variable to be checked
 * Return: pointer
 */
char *_strchr(char *s, char c)
{

	int i = 0;

	while ('\0' <= s[i])
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
