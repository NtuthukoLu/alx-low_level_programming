#include "main.h"

int _sqrt(int n, int i);
/**
 * _sqrt_recurssion - returns the natural square root of a number
 * @n The calculated square root
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - Calculates natural square
 * @n: number to calculate
 * @i: iterate number
 * Return: the natural square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;
	
	if (sqrt > n)
		return (-1);
	
	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
