#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints alphabet in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowCA;

	for (lowCA = 'a'; lowCA <= 'z'; lowCA++)
	{
		putchar(lowCA);
	}
	putchar('\n');

	return (0);
}
