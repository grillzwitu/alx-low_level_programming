# include "holberton.h"

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
while (*haystack)
{
char *start = haystack;
char *mod = needle;

while (*haystack && *mod && *haystack == *mod)
haystack++,
mod++;

if (!*mod)
return (start);

haystack = start + 1;
}

return ('\0');
}
