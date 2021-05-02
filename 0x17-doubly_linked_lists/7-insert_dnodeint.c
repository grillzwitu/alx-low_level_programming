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
	unsigned int count = 0;
	dlistint_t *currNode = *h;
	dlistint_t *newNode = NULL;
	dlistint_t *prevNode = NULL;

	if (h == NULL || (*h == NULL && idx != 0))
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	while (currNode != NULL)
	{
		if (count == idx)
		{
			newNode->next = currNode;
			newNode->prev = currNode->prev;
			prevNode = currNode->prev;
			prevNode->next = newNode;
			return (newNode);
		}
		currNode = currNode->next;
		count++;
	}
	if (count == idx)
	{
		add_dnodeint_end(h, n);
		return (newNode);
	}

	free(newNode);
	return (NULL);
}
