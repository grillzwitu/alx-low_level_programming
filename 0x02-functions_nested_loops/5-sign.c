#include "holberton.h"

/**
 *
 * _putchar: calls the fuction _putchar.
 * print_sign: Prints the sign of the argument.
 *
 * Return: 1 (if "int n" is greater than 1), 0 (If "int n" is 0), -1 (if "int n" is less than 0).
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
