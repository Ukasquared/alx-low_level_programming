#include "lists.h"

/**
 * add_node - add a node at the beginning of a list
 *
 * Return: Address of new element.
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	if (*head == NULL)
		*head = ptr;
	else if (*head != NULL)
	{
		ptr->next = *head;
		*head = ptr;
	}
	return (*head);
}
