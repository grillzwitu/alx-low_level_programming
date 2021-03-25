#include "holberton.h"

/**
 * flip_bits - Entry Point
 *
 * @n: number whose bits are to be flipped
 * @m: number flipped bits result to
 *
 * Description: Calculate how many bits need to be flipped
 * to move from one number to another
 *
 * Return: the number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int ret_val, c;

	for (c = 0, ret_val = 0; c < (sizeof(unsigned long int) * 8); c++)
	{
		if ((n & 1) != (m & 1))
			ret_val++;

		n >>= 1, m >>= 1;
	}

	return (ret_val);
}
