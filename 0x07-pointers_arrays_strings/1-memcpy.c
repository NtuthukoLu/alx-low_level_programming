#include "main.h"
/**
 * _memcpy - Copies memory area
 * @n: copies n bytes from memory area to src
 * @src: copies bytes to dest
 * @dest: gets bytes from src
 *
 * Return: Returns a pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);

}
