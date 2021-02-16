#include "holberton.h"

/**
 * *_strcpy - entry point
 *
 * @dest: char argument
 * @src: char argument
 *
 * Description: Copy the string pointed to by src,
 * including the terminating null byte
 *
 * Return: pointer to new copied string
 */

char *_strcpy(char *dest, char *src)
{
char *ptr;
ptr = dest;
while (*src)
{
*dest++ = *src++;
*dest = 0;
}
return (ptr);
}
