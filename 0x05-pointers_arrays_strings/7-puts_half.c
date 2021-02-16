#include "holberton.h"

/**
 * _strlen - entry point
 *
 * @s: char argument
 *
 * Description: Returns lenght of a string
 *
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
 * puts_half - entry point
 *
 * @str: char argument
 *
 * Description: Prints the second half of a string
 *
 */

void puts_half(char *str)
{
int i, size, mid;

size = _strlen(str);
mid = (size % 2 == 0) ? size / 2 : (size - 1) / 2 + 1;
i = mid;

while (i < size)
{
_putchar(*(str + i));
i++;
}
_putchar('\n');
}
