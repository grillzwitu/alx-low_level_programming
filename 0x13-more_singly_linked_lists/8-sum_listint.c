#include "lists.h"

/**
 * sum_listint - Entry point
 *
 * @head: a pointer to the head struct in a linked list
 *
 * Description: Sums data in a linked list
 *
 * Return: Sum of the data the linked list or
 * 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	for (sum = 0; head != NULL;)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
