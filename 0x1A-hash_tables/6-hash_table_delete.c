#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 *
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;

	temp = NULL;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			temp = ht->array[i];
			ht->array[i] = ht->array[i]->next;
			free(temp->value);
			free(temp->key);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
