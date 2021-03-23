#include "lists.h"

/**
 * reverse_listint - Entry Point
 *
 * @head: the pointer to a pointer to the first node in the linked list
 *
 * Description: Reverses a linked list
 *
 * Return: Pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_nod, *next_nod;

	prev_nod = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	for (next_nod = (*head)->next; next_nod; next_nod = (*head)->next)
	{
		(*head)->next = prev_nod;
		prev_nod = *head;
		*head = next_nod;
	}
	(*head)->next = prev_nod;

	return (*head);
}
