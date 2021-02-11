#include "holberton.h"

/**
 * print_triangle - entry point
 *
 * @size: int argument for size of the triangle
 *
 * Description: Prints a triangle in the terminal
 *
 * Return: Void
 */

void print_triangle(int size)
{
char frag, space;
int i, j;
frag = '#';

if (size > 0)
{
for (i = 0; i < size; i++)
{
for (space = size - 1; space > i; space--)
{
_putchar(' ');
}
for (j = 0; j <= i; j++)
{
_putchar(frag);
}
_putchar(10);
}
}
else
{
_putchar(10);
}
}
