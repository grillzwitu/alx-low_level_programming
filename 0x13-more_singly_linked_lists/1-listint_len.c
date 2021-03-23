#include "lists.h"

/**
 * listint_len - Entry Point
 *
 * @h: list argument
 *
 * Description: Counts the lenght of a singly linked list
 *
 * Return: Number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t nod_idx;

	for (nod_idx = 0; h != NULL; nod_idx++)
	{
		if (h == NULL)
		{
			return (nod_idx);
		}
		h = h->next;
	}

	return (nod_idx);
}
