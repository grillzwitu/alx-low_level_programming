#include "lists.h"

/**
 * add_node_end - Entry Point
 *
 * @head: pointer argument (points to the head of the linked list)
 * @str: pointer argument
 * (string to be added in the new node)
 *
 * Description: Adds a new node at the end
 * of a linked list
 *
 * Return: Address of new node or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int count;
	list_t *new_nod, *last_nod;

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
	new_nod->next = NULL;

	if (*head == NULL)
	{
		*head = new_nod;
	}
	else
	{
		last_nod = *head;
		for (; last_nod->next != NULL;)
		{
			last_nod = last_nod->next;
			last_nod->next = new_nod;
		}
	}
	return (new_nod);
}
