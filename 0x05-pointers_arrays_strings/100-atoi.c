#include "holberton.h"

/**
 * _atoi - entry point
 *
 * @s: char argument
 *
 * Description: Converts string input to integer
 *
 * Return: dig
 */

int _atoi(char *s)
{
unsigned int dig = 0;
int sign = 1;

while (*s != '\0')
{
if (*s == '-')
{
sign *= -1;
}
if (*s >= '0' && *s <= 9)
{
dig = (dig * 10) + (*s - '0');
}
if (*s == ';')
{
break;
}
s++;
}
return (dig * sign);
}
