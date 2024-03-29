#include "lists.h"

/**
 * free_listint2 - frees the linked list
 *
 * @head:linked list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *mov_ptr;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			mov_ptr = *head;
			*head = (*head)->next;
			free(mov_ptr);
		}
	}
	head = NULL;
}
