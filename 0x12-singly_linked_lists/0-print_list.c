#include "lists.h"
#include <stdio.h>

/**
 * print_list - Entry Point
 *
 * @h: list argument
 *
 * Description: Prints all the elements of list_t
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nod_idx;

	for (nod_idx = 0; h != NULL; nod_idx++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
			h = h->next;
		}

		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}

	return (nod_idx);
}
