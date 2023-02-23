#include "main.h"

/**
 * _isupper - checks for uppercase letter.
 * @c: The letter to be checked
 *
 * Return: 1 if letter is upper case,otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
