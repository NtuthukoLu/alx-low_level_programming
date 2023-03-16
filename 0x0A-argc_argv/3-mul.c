#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the result of the multiplication, followed by a new line
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: print error and return 1
 */
int main(int argc, char *argv[])
{


	if (argc > 1)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
