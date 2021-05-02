#include "lists.h"

/**
 * add_dnodeint - Entry Point
 *
 * @head: pointer to the head pointer
 * @n: int value
 *
 * Description: Adds a node at the beginning of the list
 *
 * Return: head(success) or null(fail)
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;

	if (*head)
	{
		(*head)->prev = newNode;
	}

	*head = newNode;
	return (*head);
}
