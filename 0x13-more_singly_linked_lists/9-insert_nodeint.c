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
	listint_t *new_nod, *temp1;
	unsigned int count;

	if (head == NULL)
	{
		return (NULL);
	}

	new_nod = malloc(sizeof(listint_t));
	if (new_nod == NULL)
		return (NULL);

	new_nod->n = n;
	new_nod->next = NULL;

	if (idx == 0)
	{
		new_nod->next = *head;
		*head = new_nod;
		return (new_nod);
	}

	temp1 = *head;
	for (count = 0; temp1->next && (count < (idx - 1)); count++)
		temp1 = temp1->next;

	if (idx > count + 1)
	{
		free(new_nod);
		return (NULL);
	}

	return (new_nod);
}
