#include "lists.h"

/**
 * listint_len - number of element
 * 
 * @h:linked list
 * Return: number of eelementt.
 */

size_t listint_len(const listint_t *h)
{
	int count;
	listint_t mov_ptr = h;

	while (mov_ptr != NULL)
	{
		count++;
		mov_ptr = mov_ptr->next;
	}
	return (count);
}
