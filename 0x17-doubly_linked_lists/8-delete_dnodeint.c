#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index
 * @head: head node
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *ptr;

	if (!head || *head == NULL)
		return (-1);
	if (*head != NULL)
		while ((*head)->prev != NULL)
			*head = (*head)->prev;
	ptr = *head;
	while (ptr)
	{
		if (index == count)
		{
			if (index == 0)
			{
				*head = ptr->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				if (ptr->next != NULL)
				{
					ptr->next->prev = ptr->prev;
					ptr->prev->next = ptr->next;
				}
				else
				{
					free(ptr);
					return (1);
				}
			}
			free(ptr);
			return (1);
		}
		ptr = ptr->next;
		count++;
	}
	return (-1);
}
