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
	dlistint_t *prevNode, *newNode;

	if (!idx)
		return (add_dnodeint(h, n));

	if (!h)
		return (NULL);

	prevNode = *h;

	if (!prevNode)
		return (NULL);

	while (--idx && prevNode->next)
		prevNode = prevNode->next;

	if (idx)
		return (NULL);

	newNode = malloc(sizeof(*newNode));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->prev = prevNode;
	newNode->next = prevNode->next;

	if (prevNode->next)
		prevNode->next->prev = newNode;

	prevNode->next = newNode;

	return (newNode);
}
