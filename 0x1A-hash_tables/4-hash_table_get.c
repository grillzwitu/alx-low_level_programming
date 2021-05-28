#include "hash_tables.h"

/**
 * hash_table_get - Entry Point
 *
 * @ht: a hash table
 * @key: a key value to be hashed and searched for
 *
 * Description: a function to return the value at a given
 * position based on the hash value of a key.
 *
 * Return: the value if found, NULL if not found
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int position;
	hash_node_t *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);
	position = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[position];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
