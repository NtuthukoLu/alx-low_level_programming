#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabets 10 times in lowercase with new line
 */
void print_alphabet_x10(void)
{
	int num = 0;
	char letter;
	while (num <= 10)
	{
		letter = 'a';
		while (letter <= 'z')
			_putchar(letter);

		_putchar('\n');

	}
}
