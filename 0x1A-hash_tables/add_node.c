#include "hash_tables.h"

/**
* add_node - add node to the begining of a linked list
* @head: head of list
* @key: key of node
* @value: value of key
* Return: new node if successful or NULL
*/

hash_node_t *add_node(hash_node_t **head, char *key, char *value)
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
	return (*head)
}
