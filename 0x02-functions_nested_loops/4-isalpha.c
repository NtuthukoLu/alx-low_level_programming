#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 * @c: The character c is tobe checked
 * Return: 1 if c is letter,lowercase or uppercase else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
