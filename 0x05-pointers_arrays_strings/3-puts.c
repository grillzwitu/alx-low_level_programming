#include "holberton.h"

/**
 * _puts - entry point
 *
 * @str: char argument
 *
 * Description: Prints a string to stdout
 *
 */

void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar(10);
}
