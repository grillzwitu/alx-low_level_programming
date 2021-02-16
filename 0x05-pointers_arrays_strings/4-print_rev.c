#include "holberton.h"

/**
 * _strlen - entry point
 *
 * @s: char argument
 *
 * Description: Returns lenght of a string
 *
 * Return: Lenght of s
 */

int _strlen(char *s)
{
int len;
len = 0;
while (*s)
{
len += 1;
s++;
}
return (len);
}

/**
 * print_rev - entry point
 *
 * @s: char argument
 *
 * Description: Prints a string in reverse
 *
 */

void print_rev(char *s)
{
int strsize = _strlen(s);
while (strsize--)
{
_putchar(*(s + strsize));
}
_putchar(10);
}
