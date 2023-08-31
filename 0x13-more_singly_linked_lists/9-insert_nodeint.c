#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at index
 *
 * @head:linked list
 * @idx: index
 * @n: node data
 * Return: number of nodes.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 1;
	listint_t *mov_ptr = *head;
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (!(*head) && idx == 0)
	{	*head = newNode;
		return (*head);
	}
	if (*head && idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (*head);
	}
	while (mov_ptr->next != NULL)
	{
		if (count == idx)
		{
			newNode->next = mov_ptr->next;
			mov_ptr->next = newNode;
			return (*head);
		}
		mov_ptr = mov_ptr->next;
		count++;
	}
	return (NULL);
}
