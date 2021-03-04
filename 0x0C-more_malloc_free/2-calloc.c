#include "holberton.h"

/**
 * *string_nconcat - entry point
 *
 * @nmemb: int argument
 * @size: int argument
 *
 * Description: allocates memory for an array using malloc.
 *
 * Return: Pointer to allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *arr;
unsigned int c;

c = 0;

if (nmemb == 0 || size == 0)
return (NULL);

arr = malloc(nmemb * size);

if (arr == NULL)
return (NULL);

for (c = 0; c < nmemb; c++)
*((char *)arr + c) = 0;

return (arr);
}
