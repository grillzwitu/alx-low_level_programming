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

#include <string.h>

void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *a;

    a = _calloc(98, sizeof(char));
    strcpy(a, "Holberton");
    strcpy(a + 9, " School! :)\n");
    a[97] = '!';
    simple_print_buffer(a, 98);
    free(a);
    return (0);
}