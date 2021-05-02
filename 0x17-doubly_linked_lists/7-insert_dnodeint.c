#include "lists.h"

/**
 * insert_dnodeint_at_index - Entry Point
 *
 * @h: pointer to head pointer
 * @idx: index position to insert new node
 * @n: number to insert in new node
 *
 * Description: Inserts a new node at a given postion
 *
 * Return: Pointer to newNode or null if fail
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *prev, *newnode;

if (!idx)
return (add_dnodeint(h, n));

if (!h)
return (NULL);

prev = *h;

if (!prev)
return (NULL);

while (--idx && prev->next)
prev = prev->next;

if (idx)
return (NULL);

newnode = malloc(sizeof(*newnode));
if (!newnode)
return (NULL);

newnode->n = n;
newnode->prev = prev;
newnode->next = prev->next;

if (prev->next)
prev->next->prev = newnode;

prev->next = newnode;

return (newnode);
}
