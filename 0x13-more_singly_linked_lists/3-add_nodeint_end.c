#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list
 *
 * @head:linked list
 * @n: node data
 * Return: number of nodes.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *mov_ptr = *head;

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	if (*head == NULL)
		*head = newNode;
	else
	{
		while (mov_ptr->next != NULL)
		{
			mov_ptr = mov_ptr->next;
		}
		mov_ptr->next = newNode;
	}
	return (*head);
}
