#include "lists.h"

/**
 * delete_dnodeint_at_index - Entry Point
 *
 * @head: pointer to head pointer
 * @index: index position to delete node
 *
 * Description: Deletes the node at an index position
 *
 * Return: 1 (success) or -1 (fail)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *currNode = *head;
	dlistint_t *nextNode = NULL;
	dlistint_t *deletedNode = NULL;

	while (currNode != NULL)
	{
		if (index == 0)
		{
			deletedNode = currNode;
			nextNode = currNode->next;
			if (nextNode != NULL)
				nextNode->prev = NULL;

			*head = nextNode;
			free(deletedNode);
			return (1);
		}

		if (count == index)
		{
			dlistint_t *tempNode = NULL;

			deletedNode = currNode;
			nextNode = currNode->next;
			tempNode = currtNode->prev;
			if (nextNode != NULL)
				nextNode->prev = tempNode;

			tempNode->next = nextNode;
			currNode = nextNode;
			free(deletedNode);
			return (1);
		}
		currNode = currNode->next;
		count++;
	}
	return (-1);
}
