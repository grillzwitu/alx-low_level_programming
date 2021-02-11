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
char line, new_line;
int i;
line = '_';
for (i = 1; i <= n; i++)
{
if (n < 0)
{
new_line;
}
_putchar(line);
}
_putchar(10);
}
