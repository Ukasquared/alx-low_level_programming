#include "lists.h"

/**
 * print_list - check the code
 *
 * @h: takes the list
 * Return: Always 0.
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("[%u] ", !h->str ? 0 : h->len);
		printf("%s\n", !h->str ? "(nil)" : h->str);
		h = h->next;
		count++;
	}
	return (count);
}
