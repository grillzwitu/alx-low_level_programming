#include "holberton.h"

/**
 * *_strncat - entry point
 *
 * @dest: char argument
 * @src: char argument
 * @n: int argument
 *
 * Description: Concatenates two strings
 * using at most n bytes
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;
for (i=0; dest[i] != '\0'; ++i);
for (j=0; src[j] != '\0' && j < n; ++j, ++i)
{
dest[i] = src[j];
}

dest[i] = '\0';
return (dest);
}
