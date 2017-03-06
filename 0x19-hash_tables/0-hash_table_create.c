#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: yep
 *
 * Return:
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	new_table = malloc(sizeof(hash_table_t) * size);
	if (new_table)
	{
		return (new_table);
	}

	return (NULL);
}
