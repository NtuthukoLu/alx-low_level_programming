#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9
 */
void print_most_numbers(void)
{
	int num;

	while (num <= 9)
	{
		if (num != 2 && num != 4)
			_putchar((num % 10) + '0');
		
		++num;
	}

	_putchar('\n');
}
