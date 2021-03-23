#include "lists.h"

/**
 * free_listint - Entry Point
 *
 * @head: pointer argument (points to the head of the linked list)
 *
 * Description: Frees listint_t
 *
 * Return: Void
 */

void free_listint(listint_t *head)
{
	list_t *temp;

	for (; head != NULL;)
	{
		temp = head;
		head = head->next;
		free(temp->n);
		free(temp);
	}
}
