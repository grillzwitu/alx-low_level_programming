#include "lists.h"

/**
 * add_nodeint - Entry Point
 *
 * @head: pointer argument (points to the head of the linked list)
 * @n: int argument
 * (int to be added in the new node)
 *
 * Description: Adds a new node at the beginning
 * of a linked list
 *
 * Return: Address of new node or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nod;

	new_nod = malloc(sizeof(listint_t));
	if (new_nod == NULL)
	{
		return (NULL);
	}

	new_nod->n = n;
	new_nod->next = *head;
	*head = new_nod;

	return (new_nod);
}
