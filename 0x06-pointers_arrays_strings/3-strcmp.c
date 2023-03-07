#include "main.h"
/**
 * _strcmp - Compares two pointer strings
 * @s1: Pointer to 1st string
 * @s2: Pointer to 2nd string
 * Return: difference between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
