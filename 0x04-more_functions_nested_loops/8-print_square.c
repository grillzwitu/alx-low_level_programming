#include "holberton.h"

/**
 * print_square - entry point
 *
 * @size: int argument for size of the square
 *
 * Description: Prints a diagonal line in the terminal
 *
 * Return: Void
 */

void print_square(int size)
{
char frag;
int i, j;
frag = '#';
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = 1; j < size; j++)
{
_putchar(frag);
}
_putchar(frag);
_putchar(10);
}
}
else
{
_putchar(10);
}
}
