#include "lists.h"

/**
 * free_listint - frees the list
 *
 * @head:linked list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t mov_ptr;

	while (head != NULL)
	{
		mov_ptr = head;
		head = head->next;
		free(mov_ptr);
	}
}
