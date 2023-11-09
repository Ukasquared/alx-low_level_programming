#include "hash_tables.h"

/**
* add_node - add node to the begining of a linked list
* @head: head of list
* @key: key of node
* @value: value of key
* Return: new node if successful or NULL
*/

hash_node_t *add_node(char *key, char *value)
{
	hash_node_t *node
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	node->value = strdup(value);
	if (!(node->key) || !(node->value))
		return (NULL);
	return (node);
}
