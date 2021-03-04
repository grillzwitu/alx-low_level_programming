# include "holberton.h"

/**
 * *_calloc - entry point
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
char *arr;
unsigned int c;

if (nmemb == 0 || size == 0)
return (NULL);

arr = malloc(nmemb * size);

if (arr == NULL)
return (NULL);

for (c = 0; c < (nmemb * size); c++)
arr[c] = 0;

return (arr);
}
