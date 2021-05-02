#include "lists.h"
/**
 * print_dlistint - Entry Point
 *
 * @h: pointer to the head
 *
 * Description: Prints all the elements of a dlistint_t list
 *
 * Return: count of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t const *node = h;

	if (!node)
	{
		return (count);
	}
	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		count++;
	}
	return (count);
}
