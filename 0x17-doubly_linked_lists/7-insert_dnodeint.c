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
	unsigned int count = 0;

	if (!h)
		return (NULL);
	if (idx == 0 || (idx == 1 && (*h)->next == NULL))
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (*h != NULL)
		while ((*h)->prev != NULL)
			*h = (*h)->prev;
	ptr = *h;
	while (ptr && count < idx--)
	{
		count++;
		ptr = ptr->next;
	}
	if (count == idx)
	{
		new->next = ptr->next;
		ptr->next->prev = new;
		ptr->next = new;
		new->prev = ptr;
	}
	return (new);
}
