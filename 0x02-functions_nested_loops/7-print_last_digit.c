#include "holberton.h"

/**
 * print_last_digit - entry point
 *
 * @num: int argument
 *
 * Description: print_last_digit Prints the last digit of the argument.
 *
 * Return: 0 (Success).
 *
 * _abs - entry point
 *
 * @num: int argument
 *
 * Description: _abs Prints the absolute value of the argument.
 *
 * Return: 0 (Success).
 */

int _abs(int num)
{
if (num > 0)
{
return (num);
}
else if (num < 0)
{
num = -num;
return (num);
}

return (0);
}

int print_last_digit(int num)
{
int lastdig;
lastdig = _abs((num % 10));
_putchar(lastdig + '0');
return (lastdig);
}
