#include "lists.h"

/**
 * free_listint2 - Entry Point
 *
 * @head: pointer argument (points to the head of the linked list)
 *
 * Description: Frees listint_t
 *
 * Return: Void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;
	for (; *head != NULL;)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
