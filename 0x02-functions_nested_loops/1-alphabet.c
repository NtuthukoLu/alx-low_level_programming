#include "main.h"
#include <stdio.h>
/**
 * funtion that prints alphabet in lower case followed by a new line
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter ++)
	{
		putchar("%c\n",letter)
	}
}
