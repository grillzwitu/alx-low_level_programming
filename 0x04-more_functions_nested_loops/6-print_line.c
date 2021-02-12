#include "holberton.h"

/**
 * print_line - entry point
 *
 * @n: int argument for number of lines
 *
 * Description: Prints a line in the terminal
 *
 * Return: Void
 */

void print_line(int n)
{
char line;
int i;
line = '_';
for (i = 1; i <= n; i++)
{
if (n <= 0)
{
_putchar(10);
}
_putchar(line);
}
_putchar(10);
}
