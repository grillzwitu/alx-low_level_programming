#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Entry Point
 *
 * @h: list argument
 *
 * Description: Prints all the elements of listint_t
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nod_idx;

	for (nod_idx = 0; h != NULL; nod_idx++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nod_idx);
}
