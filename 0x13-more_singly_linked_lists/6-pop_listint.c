#include "lists.h"

/**
 * pop_listint - Entry Point
 *
 * @head: a pointer to a pointer to the head struct of a linked list
 *
 * Description: Deletes the head node of a linked list
 *
 * Return: the data of the deleted head node
 */

int pop_listint(listint_t **head)
{
	int ret_val;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	ret_val = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (ret_val);
}
