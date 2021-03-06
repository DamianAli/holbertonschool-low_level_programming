#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - Function that retrieves a value associated with a key.
 * @ht: A hash table to look into.
 * @key: Key to look for.
 *
 * Return: Value associated with the key. NULL if not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (!ht || !key)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	for (node = ht->array[index]; node; node = node->next)
	{
		if (strcmp(key, node->key) == 0)
		{
			return (node->value);
		}
	}

	return (NULL);
}
