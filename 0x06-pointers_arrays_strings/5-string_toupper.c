#include "main.h"

/**
 * string_toupper - changes lower case to upper case
 * @str: pointer of type string to change
 * Return: Ponter to changed string
 */
char *string_toupper(char *str)
{
	int index;

	for (index = 0; str[index]; index++)
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
	}

	return (str);
}
