#include "lists.h"

/**
 * sum_dlistint - Entry Point
 *
 * @head: pointer to head of the list
 *
 * Description: Sums
 * Return: sum of elemnts or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *currNode  = head;

	while (currNode != NULL)
	{
		sum += currNode->n;
		currNode = currNode->next;
	}
	return (sum);
}
