#include "lists.h"

/**
 * sum_dlistint - sum list"s data
 * @h: head node
 * Return: sum if successful
 */

int sum_dlistint(dlistint_t *head)
{
    dlistint_t ptr = head;
    int sum = 0;

    while (ptr)
    {
        sum += ptr->n;
        ptr = ptr->next;
    }
    return (sum);
}