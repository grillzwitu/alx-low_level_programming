#include "holberton.h"

/**
 * _atoi - entry point
 *
 * @s: char argument
 *
 * Description: Converts string input to integer
 *
 * Return: Integer
 */

int _atoi(char *s)
{
while (*s != '\0')
{
int i;
int dig = 0;
int sign = -1;
int brk = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
sign *= -1;
if (s[i] >= '0' && s[i] <= '9')
{
dig *= 10;
dig -= (s[i] - '0');
brk = 1;
}
else if (brk == 1)
break;
}
dig = sign * dig;
return (dig);
}
