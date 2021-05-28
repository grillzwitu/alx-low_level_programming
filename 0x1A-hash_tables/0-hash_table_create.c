#include "hash_tables.h"

/**
 * hash_table_create - Entry Point
 *
 * @size: the size of the array
 *
 * Description: Creates a hash table
 *
 * Return: A pointer to the created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newHashTable;
	unsigned int i = 0;

	if (size != 0)
	{
		newHashTable = malloc(sizeof(hash_table_t));

		if (newHashTable == NULL)
			return (NULL);

		newHashTable->array = malloc(sizeof(hash_table_t *) * size);

		if (newHashTable->array == NULL)
		{
			free(newHashTable);
			return (NULL);
		}

		newHashTable->size = size;

		while (i < size)
		{
			newHashTable->array[i] = NULL;
			i++;
		}
		return (newHashTable);
	}
	return (NULL);
}
