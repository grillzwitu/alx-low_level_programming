#include "hash_tables.h"

/**
 * key_index - Entry Point
 *
 * @key: key to get index of
 * @size: size of the hash table
 *
 * Description: gives the index of a key
 *
 * Return: index for the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
