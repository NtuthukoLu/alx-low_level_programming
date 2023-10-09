#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted singly linked list using
 *               linear skip.
 * @list: A pointer to the head of the linked list to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *jump;

    if (list == NULL)
        return (NULL);

    for (jump = list; jump->next != NULL && jump->n < value; jump = jump->express)
    {
        printf("Value checked at index [%lu] = [%d]\n", jump->index, jump->n);
        if (jump->express == NULL)
        {
            while (jump->next != NULL)
                jump = jump->next;
            break;
        }
    }

    printf("Value found between indexes [%lu] and [%lu]\n", jump->index, jump->express->index);

    while (jump->index < jump->express->index && jump->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", jump->index, jump->n);
        jump = jump->next;
    }

    printf("Value checked at index [%lu] = [%d]\n", jump->index, jump->n);

    return (jump->n == value ? jump : NULL);
}

