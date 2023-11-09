#include "hash_tables.h"

/**
* hash_table_set - adds an element to the hash table.
*
* @ht: hash table
* @key: key
* @value: value
* @hash_value: index value
* Return: 1 if it succeeded, 0 otherwise
*/

int create_pair(hash_table_t *ht, const char *key, const char *value, unsigned long int hash_value)
{
	hash_node_t **arr, *current, *new_node, *temp;
	int i;

	i = 0;
	current = NULL;
	arr = NULL;

	/* test case */
	if (!ht)
		return (0);
	arr = ht->array;
	/* test case */
	if (!arr)
		return (0);
	/*get the array at hash_value */
	current = arr[hash_value]
	/* if no collision */
	if (current == NULL)
	{
		/* allocate memory */
		current = malloc(sizeof(hash_node_t));
		if (current == NULL)
			return (0);
		current->key = strdup(key);
		current->value = strdup(value);
		if (!current->key || !current->value)
			return (0);
	}
	else
	{
		/* in the case of collision */
		/* add node at the begining of list */
		if (current != NULL)
			new_node = add_node(&current, key, value);
		if (new_node == NULL)
			return (0);
	}
	return (1);
}
