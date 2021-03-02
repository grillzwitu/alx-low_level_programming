#include "holberton.h"

/**
 * _strlen - entry point
 *
 * @s: char argument
 *
 * Description: Counts the lenght of the string
 *
 * Return: length
 */

int _strlen(char *s)
{
int i, l;
l = 0;

for (i = 0; s[i] != '\0'; i++)
l += 1;

return (l);
}

/**
 * *str_concat - entry point
 *
 * @s1: pointer argument
 * @s2: pointer argument
 *
 * Description: Concats two strings
 *
 * Return: pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
char *str, *tmp;
int l1, l2;

if (!s1)
s1 = "";

if (!s2)
s2 = "";

l1 = _strlen(s1);
l2 = _strlen(s2);

str = malloc(sizeof(str) * (l1 + l2) +1);

if (str == NULL)
return (NULL);

tmp = str;

while (*s1)
*tmp++ = *s1++;

while ((*tmp++ = *s2++))
;

return (str);
}
