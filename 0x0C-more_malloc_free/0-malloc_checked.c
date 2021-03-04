#include "holberton.h"

/**
 * *malloc_checked - entry point
 *
 * @b: int argument
 *
 * Description: Allocates memory using malloc.
 *
 * Return: Pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *myMalloc;

myMalloc = malloc(sizeof(myMalloc) * b);

if (myMalloc == NULL)
{
exit (98);
}

return (myMalloc);
}
