#include "main.h"
/**
 * *_strcat - This function combines two strings
 * @dest:  Destination pointer
 * @src:  Source pointer
 * Return: a pointer resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_length = 0, src_length = 0;

	while (dest[dest_length] != '\0')
		dest_length++;

	while (src[src_length] != '\0')
	{
		dest[dest_length] = src[src_length];
		dest_length++;
		src_length++;
	}

	return (dest);
}
