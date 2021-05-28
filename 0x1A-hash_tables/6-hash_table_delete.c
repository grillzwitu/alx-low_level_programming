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
        hash_node_t *next;

        if (ht == NULL)
                return;

        for (i = 0; i < ht->size; i++)
        {
                while (ht->array[i] != NULL)
                {
                        next = ht->array[i];
                        free(next->key);
                        free(next->value);
                        ht->array[i] = ht->array[i]->next;
                        free(next);
                }
        }
        free(ht->array);
        free(ht);
}
