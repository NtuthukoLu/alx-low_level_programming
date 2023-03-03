#include "main.h"
/**
 * *_strcat - This function combines two strings
 * @dest:  Destination pointer
 * @src:  Source pointer
 * Return: a pointer resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_length = 0, int index = 0;

	while (dest_length[index++])
		dest_length++;

	index = 0;

	while (src[index])
	{
		dest[dest_length++] = src[index];
		index++
	}

	return (dest);
}
