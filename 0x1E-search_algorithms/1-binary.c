#include "search_algos.h"
/**
 * binary_search - binary search on a sorted array
 * @array: array to search (sorted)
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of value if found, -1 on error or not found
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = (int)size - 1;
	int mid;
	int i;


	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (left + right) / 2;

		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
