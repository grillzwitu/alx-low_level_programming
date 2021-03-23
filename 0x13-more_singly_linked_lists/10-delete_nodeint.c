#include "lists.h"

/**
 * delete_nodeint_at_index - Entry Point
 *
 * @head: a pointer to a pointer to the first node in the linked list
 * @index: the index at which a node is deleted
 *
 * Description: Deletes a node at an index in a linked list
 *
 * Return: 1, or -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *temp1, *temp2;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		if (*head != NULL)
		{
			temp1 = *head;
			*head = (*head)->next;
			free(temp1);
			return (1);
		}
	}
	else
	{
		temp1 = *head;
		for (count = 0; temp1 && (count < index - 1); count++)
			temp1 = temp1->next;

		if (temp1 != NULL)
		{
			temp2 = temp1;
			temp1 = temp1->next;
			temp2->next = temp1->next;
			free(temp1);
		}
		else
			return (-1);
	}
	return (1);
}
