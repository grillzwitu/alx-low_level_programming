#include "lists.h"

/**
 * dlistint_len - Entry Point
 *
 * @h: pointer to head
 *
 * Description: returns the number of elements in a linked dlistint_t list.
 *
 * Return: count of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t const *node = h;

	if (!node)
	{
		return (count);
	}
	while (node != NULL)
	{
		node = node->next;
		count++;
	}
	return (count);
}
