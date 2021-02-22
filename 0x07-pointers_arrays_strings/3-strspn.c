# include "holberton.h"

/**
 * _strspn - entry point
 *
 * @s: pointer argument
 * @accept: pointer argument
 *
 * Description: Returns number of bytes in the initial
 * segment of s consisting of only bytes of accept
 *
 * Return: Bytes of accept
 */

unsigned int _strspn(char *s, char *accept)
{

char *p1;
char *p2;
int count;
count = 0;
p1 = s;
while (*p1 != '\0')
{
for (p2 = accept; *p2 != '\0'; ++p2)
{
if (*p1 == *p2)
{
count++;
break;
}
}
if (*p2 == '\0')
{
return count;
}
++p1;
}
return count;
}
