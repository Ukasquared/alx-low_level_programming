#include "lists.h"
/**
  * add_nodeint_end - add node at end of a listint_t list.
  *
  * @head: head of pointer to linked list
  * @n: linked list data
  * Return: NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);
	current->n = n;
	current->next = NULL;
	if (*head == NULL)
	{
	*head = current;
		return (current);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = current;
	return (current);
}
