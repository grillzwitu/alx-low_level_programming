#include "holberton.h"

/**
 * get_endianness - Entry Point
 *
 * Description: Checks the endianness of the machine
 *
 * Return: 0 (big endian) or 1 (little endian)
 */

int get_endianness(void)
{
	int a = 1;
	char *c = (char *)&a;

	if (*c)
	{
		return (1);
	}

	return (0);
}
