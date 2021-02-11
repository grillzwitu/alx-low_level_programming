#include "holberton.h"

/**
 * print_numbers - entry point
 *
 * Description - prints the numbers from 0 to 9
 *
 * Return void
 */

void print_numbers(void)
{
char numbers;

for (numbers = '0'; numbers <= '9'; numbers++)
{
_putchar(numbers);
}
_putchar('\n');
}
