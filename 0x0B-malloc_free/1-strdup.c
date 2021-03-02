#include "holberton.h"

/**
 * *_strdup - entry point
 *
 * @str: pointer argument
 *
 * Description: Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * Return: pointer to duplicate of str
 */

char *_strdup(char *str)
{
char *str_dup;
int a;

if (!str)
{
return NULL;
}

a = 1;
while (str[a])
{
a++;
}

str_dup = malloc((sizeof(char) * a) +1);

if (!str_dup)
{
return NULL;
}

a = 0;
while (str[a])
{
str_dup[a] = str[a];
a++;
}

str_dup[a] = '\0';

return (str_dup);
}
