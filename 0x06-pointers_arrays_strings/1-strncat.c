#include "main.h"

/**
 * _strncat - Combines two strings using at most an inputted number of bytes.
 * @dest: The pointer of type string to append
 * @src: The pointer string to append to dest
 * @n: The number of bytes from src.
 *
 * Return: a pointer to string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_length = o;

	while (dest[index++])
		dest_length++;

	index = 0;

	while (src[index] && index < n)
	{
		dest[dest_length++] = src[index];
		index++;
	}

	return (dest);
