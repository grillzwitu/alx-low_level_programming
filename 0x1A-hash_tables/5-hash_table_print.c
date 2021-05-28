#include "hash_tables.h"

/**
 * hash_table_print - Entry Point
 *
 * @ht: Pointer to the hash table.
 *
 * Description: Prints a hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	int flag;
	unsigned long int i;
	hash_node_t *tmp;

	if (ht == NULL)
		return;
	flag = 0;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (flag == 0)
				flag = 1;
			else
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
