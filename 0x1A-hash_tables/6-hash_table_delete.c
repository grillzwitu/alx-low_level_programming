#include "hash_tables.h"

/**
 * hash_table_delete - Entry Point
 *
 * @ht: the hash table
 *
 * Description: Deletes a hash table
 *
 * Return: void.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *newNode, *delete;

	if (ht != NULL)
	{
		for (index = 0; index < ht->size; index++)
		{
			newNode = ht->array[index];

			while (newNode != NULL)
			{
				delete = newNode->next;
				free(newNode->key);
				free(newNode->value);
				free(newNode);
				newNode = delete;
				delete = NULL;
			}

			free(newNode);
		}
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}
