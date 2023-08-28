#include "lists.h"

/**
 * print_listint - print linked list
 *
 * @h:linked list
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *mov_ptr;
	mov_ptr = h;

	if (h == NULL)
		return (0);
	while (mov_ptr != NULL)
	{
		count++;
		printf("%d\n", mov_ptr->n);
		mov_ptr = mov_ptr->next;
	}
	return (count);
}
