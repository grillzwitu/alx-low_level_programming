#include "hash_tables.h"

/**
 * hash_table_set - Entry Point
 *
 * @ht: the hash table
 * @key: the key
 * @value: the value associated with the key
 *
 * Description: Adds an element to the hash table
 *
 * Return: 1 if it succeeded, 0 if it fails
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *newNode;

	if (ht == NULL || key == NULL || key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			ht->array[index]->value = strdup(value);
			return (1);
		}
	}

	newNode = malloc(sizeof(hash_node_t *));

	if (newNode == NULL)
		return (0);

	newNode->key = strdup(key);
	newNode->value = strdup(value);

	if (ht->array[index] == NULL)
	{
		newNode->next = NULL;
	}
	else
	{
		newNode->next = ht->array[index];
	}
	ht->array[index] = newNode;
	return (1);
}
