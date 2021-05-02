#include "lists.h"

/**
 * free_dlistint - Entry Point
 *
 * @head: pointer to head node or list to be freed
 *
 * Description: frees a dlistint_t list.
 *
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;

	while (node)
	{
		dlistint_t *nextNode = node->next;

		free(node);
		node = nextNode;
	}
}
