#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where the value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
    int step = (int)sqrt(size);
    int prev = 0, min = 0, max = 0, i = 0;

    if (array == NULL)
        return -1;

    printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
    while (array[prev] < value)
    {
        prev = step;
        step += sqrt(size);
        if (prev >= (int)size)
            break;
        printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
    }

    min = prev - step + 1;
    max = prev;

    if (max >= (int)size)
        max = (int)size - 1;

    printf("Value found between indexes [%d] and [%d]\n", min, max);

    for (i = min; i <= max; i++)
    {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return i;
    }

    return -1;
}
