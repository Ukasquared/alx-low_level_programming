#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at index
 * @h: head node
 * @idx: index
 * @n: data
 * Return: new node if successful
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr;
	dlistint_t *new;
	unsigned int count = 1;

	if (!h)
		return (NULL);
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	if (*h != NULL)
		while ((*h)->prev != NULL)
			*h = (*h)->prev;
	ptr = *h;
	while (ptr)
	{
		if (count == idx)
		{
			if (ptr->next == NULL)
			{
				new = add_dnodeint_end(h, n);
				return (new);
			}
			else
			{
				new = malloc(sizeof(dlistint_t));
				if (new == NULL)
					return (NULL);
				new->n = n;
				new->next = ptr->next;
				ptr->next->prev = new;
				ptr->next = new;
				new->prev = ptr;
			}
		}
		count++;
		ptr = ptr->next;
	}
	return (new);
}
