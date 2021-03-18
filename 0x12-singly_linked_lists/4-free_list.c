#include "lists.h"

/**
 * free_list - Entry Point
 *
 * @head: pointer argument (points to the head of the linked list)
 *
 * Description: Frees list_t
 *
 * Return: Void
 */

void free_list(list_t *head)
{
	list_t *temp;

	for (; head != NULL;)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
