#include "holberton.h"

/**
 * binary_to_uint - Entry Point
 *
 * @b: a pointer to a string of 0s and 1s (binary characters)
 *
 *Description: Converts binary characters to an unsigned int
 *
 * Return: The unsigned int or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ret_val = 0;
	int c1, c2;

	if (b == NULL)
		return (0);

	for (c1 = 0; b[c1 + 1]; c1++)
	{
		/*if b doesn't contain binary characters */
		if (b[c1] != '0' && b[c1] != '1')
			return (0);
	}

	for (c2 = 1; c1 >= 0; c1--, c2 *= 2)
		ret_val += ((b[c1] - '0') * (c2));

	return (ret_val);
}
