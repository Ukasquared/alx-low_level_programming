#include "lists.h"
/**
* print_list - function that prints all the elements of a list_t list
* @h: the list argument
* Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	const list_t *ptr = NULL;

	size_t count = 0;

	ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] %s", "(nil)");
		else
			printf("[%d] %s", ptr->len, ptr->str);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
