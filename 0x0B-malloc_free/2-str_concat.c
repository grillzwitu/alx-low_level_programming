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
char *str = NULL;
int str1, str2, a, b;

if (!s1)
s1 = "";

if (!s2)
s2 = "";

str1 = 0;
while (s1[str1])
str1++;

str2 = 0;
while (s2[str2])
str2++;

str = malloc(sizeof(str) * (str1 + str2));

if (!str)
return (NULL);

b = 0;
for (a = 0; a < (str1 + str2); a++)
str[a] = a < str1 ? s1[a] : s2[b++];

str[++a] = '\0';

return (str);
}
