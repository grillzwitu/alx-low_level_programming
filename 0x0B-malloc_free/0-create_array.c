#include "holberton.h"

/**
 * *create_array - entry point
 *
 * @size: int argument
 * @c: char argument
 *
 * Description: Creates an array of chars.
 *
 * Return: array of char
 */

char *create_array(unsigned int size, char c)
{
unsigned int a;
char *array;

if (size <= 0)
{
return (NULL);
}

array = malloc(sizeof(char) * size);

if (array == NULL)
{
return (NULL);
}

a = 0;
while (a < size)
{
array[a] = c;
a++;
}

return (array);
}
