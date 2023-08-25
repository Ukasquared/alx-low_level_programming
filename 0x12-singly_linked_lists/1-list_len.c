#include "lists.h"

/**
 * print_list - check the code
 *
 * @h: takes the list
 * Return: Always 0.
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
