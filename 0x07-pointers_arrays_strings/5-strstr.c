# include "holberton.h"

/**
 * compare - entry point
 *
 * @x: pointer argument
 * @y: pointer argument
 *
 * Description: Compares x to y
 *
 * Return: y == '\0'.
 */

int compare( char *x, char *y)
{
while (*x && *y)
{
if (*x != *y)
return (0);
x++;
y++;
}

return (*y == '\0');
}

/**
 * *_strstr - entry point
 *
 * @haystack: pointer argument
 * @needle: pointer argument
 *
 * Description: Finds the first occurrence of the substring
 * needle in the string haystack.
 *
 * Return: The beginning of needle.
 */

char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
if ((*haystack == *needle) && compare(haystack, needle))
return haystack;
haystack++;
}

return ('\0');
}
