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

	if (!h && *h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	ptr = *h;
	while (ptr->next && count < idx)
	{
		count++;
		ptr = ptr->next;
	}
	if (count == idx)
	{
		ptr->prev->next = new;
		new->prev = ptr->prev;
		new->next = ptr;
		ptr->prev = new;
		return (new);
	}
	if (count == idx--)
	{
		ptr->next = new;
		new->prev = ptr;
		return (new);
	}
	return (NULL);
}
