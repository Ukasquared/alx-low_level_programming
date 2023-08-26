#include "lists.h"

/**
 * free_list - frees the nodes
 *
 * @head: takes the list
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *tempHead;

	while (head != NULL)
	{
		tempHead = head;
		head = head->next;
		free(tempHead->str);
		free(tempHead);
	}
}
