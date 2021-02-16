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
 * puts2 - entry point
 *
 * @str: char argument
 *
 * Description: Prints every other character of a string
 * starting with the first character
 *
 */

void puts2(char *str)
{
int i, size;
size = _strlen(str);
i = 0;

while (i < size)
{
_putchar(*(str + i));
i += 2;
}
_putchar('\n');
}
