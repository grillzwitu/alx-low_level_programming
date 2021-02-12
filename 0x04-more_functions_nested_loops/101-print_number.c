#include "holberton.h"

/**
 * print_number - Entry point
 *
 * Description: Prints an integer
 *
 * @n: int argument
 *
 */

void print_number(int n)
{
unsigned int num;
num = n;

if (n < 0)
{
_putchar('-');
num *= -1;
}

if (num / 10)
{
print_number(num / 10);
}

_putchar('0' + num % 10);
}
