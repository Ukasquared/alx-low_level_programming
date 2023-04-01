#include "lists.h"
/**
* add_node - function that adds a new node at the beginning of a list_t list.
*
* @head: read pointer to null
* @str: read the member value
* Return: address of new element
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = NULL;

	int str_len;

	ptr = malloc(sizeof(list_t));
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	ptr->str = strdup(str);
	ptr->next = NULL;
	for (str_len = 0; str[str_len] != '\0';  str_len++)
		;

	ptr->len = str_len;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
