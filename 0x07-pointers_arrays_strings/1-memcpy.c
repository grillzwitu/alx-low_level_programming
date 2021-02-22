# include "holberton.h"

/**
 * *_memcpy - entry point
 *
 * @dest: pointer argument
 * @src: char argument
 * @n: int argument
 *
 * Description: Copies n bytes from src to dest
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
