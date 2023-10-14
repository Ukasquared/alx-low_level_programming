#include "lists.h"

/**
 * add_dnodeint_end - add a node to the end a list
 * @head: head node
 * @n: data
 * Return: address of new node if succesful or NULL
 */

	dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
	{
		dlistint_t *ptr, *new;

		if (head == NULL)
			return (NULL);
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		if (*head == NULL)
		{
			new->next = *head;
			*head = new;
			return (*head);
		}
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
		new->prev = ptr;
		return (new);
	}
