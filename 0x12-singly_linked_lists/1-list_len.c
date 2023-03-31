#include "lists.h"
/**
* list_len - function that prints all the elements of a list_t list
* @h: the list argument
* Return: number of nodes
*/

size_t list_len(const list_t *h)
{
	const list_t *ptr = NULL;

	size_t count = 0;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
