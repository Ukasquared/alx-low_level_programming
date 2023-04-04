#include "lists.h"
/**
* print_listint -  a function that prints all
* the elements of a listint_t list.
* @h: linked list
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (!h)
		printf("list is empty");
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return(count);
}