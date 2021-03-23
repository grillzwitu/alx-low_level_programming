#include "lists.h"

/**
 * get_nodeint_at_index - Entry point
 *
 * @head: a pointer to the beginning struct of the linked list
 * @index: the index of the node to be returned
 *
 * Description: Returns the nth node of a linked list
 *
 * Return: the pointer to the nth node or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	if (head == NULL)
	{
		return (NULL);
	}

	/* count the list lenght*/
	for (count = 0; (head != NULL) && (i < index); count++)
	{
		head = head->next;
	}
	if (head == NULL)
	{
		return (NULL);
	}
	return (head);
}
