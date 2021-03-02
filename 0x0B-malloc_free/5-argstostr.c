#include "holberton.h"

/**
 * *argstostr - entry point
 *
 * @ac: int argument
 * @av: int argument
 *
 * Description: Concats arguments passed into the function
 *
 * Return: pointer to the new string or Null
 */

char *argstostr(int ac, char **av)
{
char *str;
int a, arg, bit, size;

size = ac;

if (ac == 0 || av == NULL)
return (NULL);

for (arg = 0; arg < ac; arg++)
{
for (bit = 0; av[arg][bit]; bit++)
size++;
}

str = malloc(sizeof(char) * size + 1);

if (str == NULL)
return (NULL);

a = 0;

for (arg = 0; arg < ac; arg++)
{
for (bit = 0; av[arg][bit]; bit++)
str[a++] = av[arg][bit];

str[a++] = '\n';
}

str[size] = '\0';

return (str);
}
