#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node according to index
 *
 * @head:linked list
 * @index: index
 * Return: number of nodes.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *mov_ptr = head;

	if (head == NULL)
		return (NULL);
	if (head != NULL && index == 0)
		return (head);
	while (mov_ptr != NULL)
	{
		count++;
		if (count == index && mov_ptr != NULL)
			return (mov_ptr);
	}
	return (0);
}
