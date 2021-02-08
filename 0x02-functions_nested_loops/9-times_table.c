#include "holberton.h"

/**
 *
 * times_table: Prints the 9 times table.
 *
 * Return: void.
 */

void times_table(void)
{
int row, col, prod;

for (row = 0; row < 10; row++)
{
for (col = 0; col < 10; col++)
{
prod = row * col;
if (col == 0)
{
_putchar('0');
continue;
}
_putchar(',');

if (prod < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(prod + '0');
}
else
{
_putchar(' ');
_putchar(prod / 10 + '0');
_putchar(prod % 10 + '0');
}
}
_putchar('\n');
}
}
