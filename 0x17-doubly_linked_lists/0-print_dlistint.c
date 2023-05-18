#include "lists.h"
/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to list to print
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
    int nodeNum = 0;
    const dlistint_t *temp = h;
    
    while (temp)
	{
		printf("%i\n", temp->n);
		nodeNum++;
		temp = temp->next;
	}

    return (nodeNum);
    
}