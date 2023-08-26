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

	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	if (*head == NULL)
		*head = newNode;
	else if (*head != NULL)
	{
		while (mov_ptr->next != NULL)
			mov_ptr = mov_ptr->next;
		mov_ptr->next = newNode;
	}
	return (mov_ptr);
}
