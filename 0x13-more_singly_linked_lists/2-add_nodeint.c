#include "lists.h"

/**
 * add_nodeint - check the code
 * 
 * @head:linked list
 * @n: node data
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t newNode = malloc(sizeof(listint_t));

	if (newNode == Null)
		*head == newNode;
	else
	{
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
	}
	return (*head);
}
