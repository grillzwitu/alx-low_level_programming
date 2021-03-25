#include "holberton.h"

/**
 * print_binary - Entry Point
 *
 * @n: Number to be printed in binary
 *
 *Descrition: Prints the binary representation of a number.
 *
 * Return: Void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);

	}
	_putchar((n & 1) + '0');
}
