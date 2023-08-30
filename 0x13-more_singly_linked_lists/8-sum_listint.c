#include "lists.h"

/**
 * sum_listint - sum list data
 *
 * @head:linked list
 * Return: sum of list data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *mov_ptr;

	mov_ptr = head;
	if (head == NULL)
		return (0);
	while (mov_ptr != NULL)
	{
		sum += mov_ptr->n;
		mov_ptr = mov_ptr->next;
	}
	if (!sum)
		return (0);
	return (sum);
}
