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
	if (ptr == NULL)
	{
		printf("List is empty");
	}
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[%d] %s", ptr->len, "(nil)");
		else
			printf("[%d] %s", ptr->len, ptr->str);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
