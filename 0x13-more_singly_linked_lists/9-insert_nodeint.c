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
	unsigned int count = 0;
	listint_t *mov_ptr = *head;
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (!(*head) && idx == 0)
		*head = newNode;
	else if (*head)
	{
		while (mov_ptr->next != NULL)
		{
			count++;

			if (count == idx)
			{
				newNode->next = mov_ptr->next;
				mov_ptr->next = newNode;
			}
			mov_ptr = mov_ptr->next;
		}
	}
	else
		return (NULL);
	return (*head);
}
