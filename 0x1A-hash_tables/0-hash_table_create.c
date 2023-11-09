#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: the size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = NULL;

	/* allocate memory for struct) */
	table = malloc(sizeof(table));
	if (!table)
		return (NULL);
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (!(table->array))
		return (NULL);
	table->size = size;
	for (i = 0; i < size; i++)
	{
		*((table->array) + i) = NULL;
	}
	return (table);
}
