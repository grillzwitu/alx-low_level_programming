#include "holberton.h"

/**
 * clear_bit - Entry Point
 *
 * @n: pointer to the number whose bit is to be modified
 * @index: the index at which the bit is to be modified
 *
 * Description: Sets the value of a bit at a given index to 0
 *
 * Return: 1 or -1 if it fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask_no;

	if (n == NULL || (sizeof(unsigned long int) * 8))
		return (-1);

	mask_no = 1 << index;
	*n = (*n & ~mask_no);

	return (1);
}
