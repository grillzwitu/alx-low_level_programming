# include "holberton.h"

/**
 * *_realloc - entry point
 *
 * @ptr: pointer argument
 * @old_size: int argument
 * @new_size: int argument
 *
 * Description: Reallocates a memory block using malloc and free.
 *
 * Return: Pointer to reallocated memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *temp, *reAlloc;
unsigned int c;

if (ptr != NULL)
{
temp = ptr;
}
else
{
return (malloc(new_size));
}

if (new_size == old_size)
{
return (ptr);
}

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (0);
}

reAlloc = malloc(new_size);

if (reAlloc == NULL)
{
return (0);
}

for (c = 0; c < (old_size || c < new_size); c++)
{
*(reAlloc + c) = temp[c];
}

free(ptr);

return (reAlloc);
}
