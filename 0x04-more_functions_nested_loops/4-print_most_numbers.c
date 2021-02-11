#include "holberton.h"

/**
 * print_most_numbers - entry point
 *
 * Description - prints the numbers from 0 to 9
 * excluding 2 and 4
 *
 * Return void
 */

void print_most_numbers(void)
{
char numbers;

for (numbers = '0'; numbers <= '9'; numbers++)
{
if (numbers == '2' || numbers == '4')
{
continue;
}
_putchar(numbers);
}
_putchar('\n');
}
