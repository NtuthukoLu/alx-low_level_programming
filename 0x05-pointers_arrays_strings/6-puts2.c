#include "main.h"
/**
 * puts2 - Prints every character starting with 1st charater
 * @str: Pointer
 */
void puts2(char *str)
{
	int index = 0, length = 0;

	while(str[index++])
		length++;

	for (index = 0; index < length; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
