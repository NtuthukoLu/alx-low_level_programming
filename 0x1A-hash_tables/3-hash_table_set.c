#include "hash_tables.h"

/**
 * hash_table_set - sets a hash table key value pair in hash table
 * @ht: hash table to set in
 * @key: key to generate hash value and index off
 * @value: value to set as hash_node's value
 *
 * Return: (1) success, (0) failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_i = 0;
	hash_node_t *newNode, *current;

	if (!ht || !key || strcmp(key, "\0") == 0)
		return (0);

	key_i = key_index((const unsigned char *)key, ht->size);
	current = ht->array[key_i];

	newNode = malloc(sizeof(hash_node_t));
	if (!newNode)
		return (0);
	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = NULL;
	if (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			newNode->next = current;
			ht->array[key_i] = newNode;
			return (1);
		}
		while (current->next)
		{
			if (strcmp(current->next->key, key) == 0)
			{
				newNode->next = current->next->next;
				free(current->next->key), free(current->next->value), free(current->next);
				current->next = newNode;
				return (1);
			}
			current = current->next;
		}
		newNode->next = ht->array[key_i];
		ht->array[key_i] = newNode;
		return (1);
	}
	ht->array[key_i] = newNode;
	return (1);
}
