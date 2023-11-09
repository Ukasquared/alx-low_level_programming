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
	const unsigned char *keys = (const unsigned char*)key;
	
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

int create_pair(hash_table_t *ht, const unsigned char *key, const char *value, unsigned long int hash_value)
{
	hash_node_t **arr, *current, *new_node;
	const char *keys = (const char*)key;

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
	current = arr[hash_value];
	/* if no collision */
	if (current == NULL)
	{
		/* allocate memory */
		current = malloc(sizeof(hash_node_t));
		if (current == NULL)
			return (0);
		current->key = strdup(keys);
		current->value = strdup(value);
		if (!current->key || !current->value)
			return (0);
	}
	else
	{
		/* in the case of collision */
		/* add node at the begining of list */
		if (current != NULL)
			new_node = add_node(&current, keys, value);
		if (new_node == NULL)
			return (0);
	}
	return (1);
}


/**
* add_node - add node to the begining of a linked list
* @head: head of list
* @key: key of node
* @value: value of key
* Return: new node if successful or NULL
*/

hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *temp;

	if (*head == NULL)
		return (NULL);
	if (!key || !value)
		return (NULL);
	temp = *head;
	*head = malloc(sizeof(hash_node_t));
	if (*head == NULL)
		return (NULL);
	(*head)->key = strdup(key);
	(*head)->value = strdup(value);
	if (!(*head)->key || !(*head)->value)
		return (NULL);
	(*head)->next = temp;
	return (*head);
}
