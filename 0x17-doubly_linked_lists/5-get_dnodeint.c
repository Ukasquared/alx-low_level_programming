#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @h: head node
 * @index: index
 * Return: returns nth node if successful
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *ptr;
    int count = 0;

    if (!head)
        return (NULL);
    ptr = *head;
    while(ptr->next && ptr && count < index)
    {
        count++;
        ptr = ptr->next;
    }
    if (count == index)
        return (ptr);
    return (NULL);
}