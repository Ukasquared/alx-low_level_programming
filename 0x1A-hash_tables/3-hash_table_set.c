#include "hash_tables.h"

/**
* hash_table_set - adds an element to the hash table.
*
* @ht: hash table
* @key: key
* @value: value
* Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash_value;
	int status;
	const unsigned char *keys = (const unsigned char *)key;

	 /* test case */
	if (!ht || !keys || *keys == '\0' || !value)
		return (0);

	hash_value = key_index(keys, ht->size);
	status = create_pair(ht, keys, value, hash_value);
	if (status == 0)
		return (0);
	return (1);
}


/**
* hash_table_set - adds an element to the hash table.
*
* @ht: hash table
* @key: key
* @value: value
* @hash_value: index value
* Return: 1 if it succeeded, 0 otherwise
*/

int create_pair(hash_table_t *ht, const unsigned char *key,
		const char *value, unsigned long int hash_value)
{
	hash_node_t *temp, *new_node;
	const char *keys = (const char *)key;
	char *new_value;

	if (ht->array[hash_value])
	{
		/* in the case of collision , update value , check for key in the linked list, tranversing it */
		temp = ht->array[hash_value];
		while (temp != NULL)
		{
			if (strcmp(temp->key, keys) == 0)
			{
				new_value = strdup(value);
				if (!new_value)
					return (0);
				free(temp->value);
				temp->value = new_value;
				return (1);
			}
			temp = temp->next;
		}
	}

	/* if no collision */
	/* add node at the begining of list */
	new_node = add_node(keys, value);
	if (new_node == NULL)
		return (0);
	new_node->next = ht->array[hash_value];
	ht->array[hash_value] = new_node;
	return (1);
}

/**
* add_node - add node to the begining of a linked list
*
* @key: key of node
* @value: value of key
* Return: new node if successful or NULL
*/

hash_node_t *add_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	/* test case for stdrup */
	if (node->key == NULL || node->value == NULL)
	{
		free(node);
		return (NULL);
	}
	return (node);
}
