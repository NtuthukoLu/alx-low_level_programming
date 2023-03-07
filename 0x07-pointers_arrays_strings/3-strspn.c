#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: number of bytes in the initial segement
 * @accept: holds the number of bytes.
 *
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int bytes = 0;

	while (*s)
	{
		while (accept[i])
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (bytes);
		}

		s++;

	}

	return (bytes);
}


