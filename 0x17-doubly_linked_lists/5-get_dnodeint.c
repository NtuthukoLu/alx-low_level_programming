#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list
 * @head: head node of list
 * @index: node to return
 * Return: desired node, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	for (; temp && i < index; i++)
	{
		temp = temp->next;
	}

	return (temp);
}
