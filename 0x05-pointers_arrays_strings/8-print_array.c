#include "holberton.h"
#include <stdio.h>

/**
 * print_array - entry point
 *
 * @a: int argument
 * @n: int argument
 *
 * Description: Prints n elements of an array of integers
 *
 */

void print_array(int *a, int n)
{
int i;
i = 0;
while (i < n)
{
printf("%d", a[i]);
if (i != (n - 1))
{
printf(",");
printf(" ");
}
i++;
}
printf("\n");
}
