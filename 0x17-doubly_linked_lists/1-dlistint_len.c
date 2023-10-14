#include "lists.h"

/**
 * dlistint_len - length of a list
 * @h: head node
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
    int count = 0;

    while (h)
    {
        count += 1;
        h = h->next;
    }
    return (count);
}