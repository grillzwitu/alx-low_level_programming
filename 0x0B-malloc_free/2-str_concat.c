#include "holberton.h"

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
char *str;
int c_c, l, a;

c_c = 0;
l = 0;

if (!s1)
s1 = "";

if (!s2)
s2 = "";

for (a = 0; s1[a] || s2[a]; a++)
l++;

str = malloc(sizeof(str) * l);

if (str == NULL)
return (NULL);

for (a = 0; a < s1[a]; a++)
str[c_c++] = s1[a];

for (a = 0; a < s2[a]; a++)
str[c_c++] = s2[a];

return (str);
}
