#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 *
 * @head:linked list
 * @index: index
 * @n: node data
 * Return: number of nodes.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;	
	listint_t *mov_ptr = NULL;
	listint_t *prev_ptr = *head;

	if (!(*head))
		return (-1);
	if (*head && index == 0)
	{
		*head = (*head)->next;
		free(prev_ptr);
		prev_ptr = NULL;
		return (1);
	}
	else
	{
		while (count <= index)
		{	
			if (count == index)
			{
				mov_ptr->next = prev_ptr->next;
				free(prev_ptr);
				prev_ptr = NULL;
				return (1);
			}
		mov_ptr = prev_ptr;
		prev_ptr = prev_ptr->next;
		count++;
		}
	}
	return (-1);
}
