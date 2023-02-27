#include "main.h"
/**
 * swap_int - Swaps two integer values
 * @a: The 1st integer to be swiped
 * @b: 2nd integer to be swiped with the 1st
 */

void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;

}
