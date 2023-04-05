#include "lists.h"
/**
* add_nodeint - function that adds a new node
* at the beginning of a listint_t list.
* @head: linked list
* @n: linked list data
* Return: address of new element
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
