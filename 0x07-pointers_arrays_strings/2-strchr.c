# include "holberton.h"

/**
 * *_strchr - entry point
 *
 * @s: pointer argument
 * @c: char argument
 *
 * Description: Locates c in s
 *
 * Return: Pointer to c
 */

char *_strchr(char *s, char c)
{

while(*s != c && *s != '\0')
{
s++;
}

if(*s == c)
{
return (s);
}
else
{
return ('\0');
}

}
