#include <stdio.h>
/**
 * main - prints number of arguments
 * @argc: number of arguments
 * @argv: an array pointer to arguments
 * Return: Always 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
