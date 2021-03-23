#include "lists.h"

/**
 * insert_nodeint_at_index - Entry Point
 *
 * @head: a pointer to the pointer to the first node in the linked list
 * @idx: index at which the new node is to be added
 * @n: the piece of data to put into the new node
 *
 * Description: inserts a new node at a given position
 *
 * Return: Address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_nod, *temp;
	unsigned int count;

	if (temp == NULL)
	{
		return (NULL);
	}

	temp = *head;
	for (count = 0; temp->next && (count < (idx - 1)); count++)
	{
		temp = temp->next;
	}

	new = malloc(sizeof(listint_t));

	if (new_nod != NULL)
	{
		new_nod->n = n;
		if (idx == 0)
		{
			new_nod->next = *head;
			*head = new_nod;
			return (new_nod);
		}
		if (count + 1 == idx)
		{
			new_nod->next = temp->next;
			temp->next = new_nod;
			return (new_nod);
		}
	}

	if (idx > count + 1)
	{
		free(new_nod);
		return (NULL);
	}
	return (new_nod);
}
