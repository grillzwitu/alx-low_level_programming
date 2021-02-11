#include "holberton.h"

/**
 * print_diagonal - entry point
 *
 * @n: int argument for number of lines
 *
 * Description: Prints a diagonal line in the terminal
 *
 * Return: Void
 */

void print_diagonal(int n)
{
char line, space;
int i, j;
line = '\\';
space = ' ';
if (n > 0)
{
for (i = 1; i <= n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(space);
}
_putchar(line);
_putchar(10);
}
else
{
_putchar(10);
}
}
}
