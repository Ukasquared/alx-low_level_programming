#include "lists.h"

/**
 * add_dnodeint - add a node to a list
 * @h: head node
 * @n: data
 * Return: address of new node if succesful or NULL
 */

 dlistint_t *add_dnodeint(dlistint_t **head, const int n)
 {
    dlistint_t *new;
    if (!head)
        return (NULL);
    new = malloc(sizeof(dlistint_t));
    if (!new)
        return (NULL);
    new->n = n;
    new->prev = NULL;
    new->next = NULL;
    if (*head == NULL)
    {
        new->next = *head;
        *head = new;
        return (*head);
    }
    (*head)->prev = new;
    new->next = *head;
    new->prev = new;
    *head = new;
    return (*head);
 }