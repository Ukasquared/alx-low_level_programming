#include "lists.h"

/**
 * free_listint2 - frees the linked list
 * 
 * @head:linked list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	if (head == NULL)
		return NULL
	listint_t mov_ptr;
	while (*head != NULL)
	{
		mov_ptr = *head;
		head = head->next;
		free(mov_ptr);
	}
	free(*head);
}
