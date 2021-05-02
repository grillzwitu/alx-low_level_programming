#include "lists.h"

/**
 * add_dnodeint_end - Entry Point
 *
 * @head: pointer to the head pointer
 * @n: int parameter
 *
 * Description: Adds a new node at the end of the list
 *
 * Return: head(success) or null(fail)
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;
	dlistint_t *currNode = *head;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}

	while (currNode != NULL)
	{
		if (currNode->next == NULL)
			break;
		currNode = currNode->next;
	}
	newNode->prev = currNode;
	currNode->next = newNode;
	return (*head);
}
