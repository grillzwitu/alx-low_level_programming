#include "lists.h"

/**
 * get_dnodeint_at_index - Entry Point
 *
 * @head: pointer to the head
 * @index: Int parameter, Index to find
 *
 * Description: Finds the node at an index in a doubly linked list
 *
 * Return: nth node(Success) or null(fail)
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *currNode = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (currNode != NULL)
	{
		if (count == index)
			break;
		currNode = currNode->next;
		count++;
	}

	return (currNode);
}
