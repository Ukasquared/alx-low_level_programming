#include "lists.h"

/**
 * pop_listint - check the code
 *
 * @head:linked list
 * Return: o if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *mov_ptr;
	int node_data;

	if (*head == NULL)
		return (0);
	if (*head != NULL)
	{
		mov_ptr = *head;
		node_data = mov_ptr->n;
		*head = (*head)->next;
		free(mov_ptr);
	}
	if (!node_data)
		return (0);
	return (node_data);
}
