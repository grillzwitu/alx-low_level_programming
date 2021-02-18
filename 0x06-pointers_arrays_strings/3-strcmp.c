#include "holberton.h"

/**
 * _strcmp - entry point
 *
 * @s1: char argument
 * @s2: char argument
 *
 * Description: Compares a string
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
while(*s1 == *s2)
{
if (*s1 == '\0' || *s2 == '\0')
{
break;
}
s1++;
s2++;
}
if(*s1 == '\0' && *s2 == '\0')
{
return (0);
}
else
{
return (*s1 - *s2);
}

}
