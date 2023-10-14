#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: head node
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	while (ptr)
	{
		ptr = ptr->next;
		free(ptr);
	}
}
