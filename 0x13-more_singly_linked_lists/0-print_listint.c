#include "lists.h"

/**
 * print_listint - check the code
 * 
 * @h:linked list
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	int count;
	listint_t mov_ptr;

	if (h == NULL)
		return (NULL):
	while (h != NULL)
	{
		count++;
		print("%d", mov_ptr->n);
		mov_ptr = mov_ptr->next;
	}
	return (count);
}
