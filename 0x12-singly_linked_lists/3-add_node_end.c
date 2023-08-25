#include "lists.h"

/**
 * *add_node_end - add a node at the beginning of a list
 * @head: recieves a null r existing node
 * @str: string
 * Return: Address of new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *ptr = malloc(sizeof(list_t));
	list_t *mov_ptr = NULL;

	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	if (*head == NULL)
		*head = ptr;
	if (*head != NULL)
	move_ptr = head;
	while ( move_ptr && *move_ptr->next == NULL)
		
	return (*head);
}
