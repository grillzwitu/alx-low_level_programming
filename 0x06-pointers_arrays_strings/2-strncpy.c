#include "holberton.h"

/**
 * *_strncpy - entry point
 *
 * @dest: char argument
 * @src: char argument
 * @n: int argument
 *
 * Description: Copies a string
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int j;
for (j = 0; src[j] != '\0' && j < n; ++j)
{
dest[j] = src[j];
}

for (; j < n; ++j)
{
dest[j] = '\0';
}

return (dest);
}
