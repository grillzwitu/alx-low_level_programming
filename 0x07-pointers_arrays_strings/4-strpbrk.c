# include "holberton.h"

/**
 * *_strpbrk - entry point
 *
 * @s: pointer argument
 * @accept: pointer argument
 *
 * Description: locates the first occurrence in the
 * string s of any of the bytes in the string accept.
 *
 * Return: First byte of s that match one of the
 * bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
int i, j, pl, flag = 0;
for (i = 0; s[i] != '\0'; i++)
;
pl = i;
for (i = 0; accept[i] != '\0'; i++)
{
for (j = 0; s[j] != '\0'; j++)
{
if (accept[i] == s[j])
{
if (j <= pl)
{
pl = j;
flag = 1;
}
}
}
}
if (flag == 1)
{
return (&s[pl]);
}
else
{
return ('\0');
}
}
