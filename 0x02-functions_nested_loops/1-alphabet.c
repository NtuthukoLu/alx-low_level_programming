#include "main.h"
/**
 * print_alphabet - funtion that prints alphabet in lower case followed by a new li * ne
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
