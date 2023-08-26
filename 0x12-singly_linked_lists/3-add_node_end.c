#include "lists.h"

/**
 * *add_node_end - add a node at the beginning of a list
 * @head: recieves a null or existing node
 * @str: string
 * Return: Address of new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *newNode = malloc(sizeof(list_t));
	list_t *mov_ptr = *head;
	size_t len;

	if (newNode == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	newNode->str = strdup(str);
	newNode->len = len;
	if (mov_ptr == NULL)
		*head = newNode;
	else if (mov_ptr != NULL)
	{
		while (mov_ptr->next != NULL)
			mov_ptr = mov_ptr->next;
		mov_ptr->next = newNode;
	}
	return (mov_ptr);
}
