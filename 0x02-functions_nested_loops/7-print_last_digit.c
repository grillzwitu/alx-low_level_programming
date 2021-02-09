#include "holberton.h"

/**
 * print_last_digit - entry point
 *
 * @num: int argument
 *
 * Description: print_last_digit Prints the last digit of the argument.
 *
 * Return: 0 (Success).
 */

int print_last_digit(int num)
{
int lastdig;
if (num < 0)
{
num = -num;
}
lastdig = num % 10;
_putchar(lastdig + '0');
return (lastdig);
}
