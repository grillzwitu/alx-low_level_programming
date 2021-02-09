#include "holberton.h"

/**
 * print_sign - entry point
 *
 * @n: int argument
 *
 * Description: print_sign Prints the sign of the argument.
 *
 * Return: 1 (n > 1), 0 (n = 0), -1 (n < 0).
 */


int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}

}
