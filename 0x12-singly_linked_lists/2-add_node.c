#include "lists.h"

/**
 * add_node - Entry Point
 *
 * @head: pointer argument (points to the head of the linked list)
 * @str: pointer argument
 * (string to be added in the new node)
 *
 * Description: Adds a new node at the beginning
 * of a linked list
 *
 * Return: Address of new node or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	int count;
	list_t *new_nod;

	new_nod = malloc(sizeof(list_t));
	if (new_nod == NULL)
	{
		return (NULL);
	}

	for (count = 0; str[count]; count++)
	{
		;
	}
	new_nod->str = strdup(str);
	new_nod->len = count;
	new_nod->next = *head;
	*head = new_nod;

	return (new_nod);
}
