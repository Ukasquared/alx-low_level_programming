#include "lists.h"

/**
 * list_len - return list length
 *
 * @h: takes the list
 * Return: Always list len.
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
