#include "hash_tables.h"

/**
 * hash_table_get - gets a hash table key value pair in hash table
 * @ht: hash table to pull value from
 * @key: key to generate hash value and index off
 *
 * Return: value associated with key, or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int key_i;
	hash_node_t *current;

	for (key_i = o; key_i < ht->size; key_i++)
	{
		current = ht->array[key_i];
		while (current)
		{
			if (strcmp(current->key, key) == 0)
				return (current->value);
			current = current->next;
		}
	}
	return (NULL);
}
