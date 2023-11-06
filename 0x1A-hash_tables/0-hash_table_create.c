#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * size: the size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	hash_node_t **arr;
	unsigned long int i;
	/* allocate memory for struct) */
	table = malloc(sizeof(table));
	if (!table)
		return (NULL);
	arr = malloc(sizeof(hash_node_t*) * size);
	if (!arr)
		return(NULL);
	table->size = size;
	for (i = 0; i < size; i++)
		*(arr + i) = NULL;
	table->array = arr;
	return (table);
}
