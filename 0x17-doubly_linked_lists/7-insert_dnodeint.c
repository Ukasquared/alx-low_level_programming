#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at index
 * @h: head node
 * @idx: index
 * @n: data
 * Return: new node if successful
 */

 dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
 {
    dlistint_t *ptr;
    int count = 0;

    if (!head && *head == NULL)
        return (NULL);
    if (!new)
        return (NULL);
    new->n = n
    new->prev = NULL;
    new->next = NULL;
    while (ptr->next && count < index)
    {
        count++;
        ptr = ptr->next;
    }
    if (count == index)
    {
        ptr->prev->next = new;
        new->prev = ptr->prev;
        ptr->prev = new;
        return (new);
    }
    if (count == index--)
    {
        ptr->next = new;
        new->prev = ptr;
        return (new);
    }
    return (NULL);
 }