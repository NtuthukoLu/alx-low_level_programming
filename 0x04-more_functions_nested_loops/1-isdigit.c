#include "main.h"

/**
 * _isdigit - checks for a digit 0 through 9
 * @c: the variable to be checked
 *
 * Returns: 1 if variable is a digit else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
