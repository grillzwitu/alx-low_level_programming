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
unsigned int l1, l2;
char *conc, *tmp;

if (!s1)
s1 = "";
else
l1 = _strlen(s1);

if (!s2)
s2 = "";
else
l2 = _strlen(s2);

conc = malloc(l1 + l2 + 1);
if (!conc)
return (0);

tmp = conc;
while (*s1)
*tmp++ = *s1++;

while ((*tmp++ = *s2++))
;

return (conc);
}
