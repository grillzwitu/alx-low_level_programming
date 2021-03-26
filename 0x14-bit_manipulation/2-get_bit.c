#include "holberton.h"

/**
 * get_bit - Entry Point
 *
 * @n: number input whose bit value should be returned
 * @index: the index at which a value is to be returned
 *
 * Description: Returns the value of a bit at a given index
 *
 * Return: Bit value at an index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int c;
	int bit_val;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	for (c = 0; c < index; c++)
		n >>= 1;

	bit_val = n & 1;

	return (bit_val);
}
