#include "holberton.h"

/**
 * _print_rev_recursion - entry point
 *
 * @s: char argument
 *
 * Description: Prints the reverse of a string
 *
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
