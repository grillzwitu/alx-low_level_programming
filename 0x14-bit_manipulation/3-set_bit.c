#include "holberton.h"

/**
 * set_bit - Entry Point
 *
 * @n: a pointer to the number to be modified
 * @index: the index of the bit value
 *
 * Description: set the bit value at an index to 1
 *
 * Return: 1 or  -1 if it fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > (sizeof(unsigned long int) * 8))
		return (-1);

	*n = (*n | (1 << index));
	return (1);
}
