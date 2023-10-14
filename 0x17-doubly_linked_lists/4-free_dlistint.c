#include "lists.h"

/**
 * free_dlistint - frees a list
 * @h: head node
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
    dlistint_t *ptr;
    while (ptr->next)
    {
        ptr = ptr->next;
        free(ptr->prev);
    }
    free(ptr);
}