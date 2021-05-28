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
	unsigned long int i;
	hash_node_t *tmp;
	hash_node_t *tmp_2;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			tmp_2 = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = tmp_2;
		}
	}
	free(ht->array);
	free(ht);
}
