# include "holberton.h"
# include <stdio.h>

/**
 * print_diagsums - entry point
 *
 * @a: pointer argument
 * @size: int argument
 *
 * Description: Prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * Return: sum of the diagonals
 */

void print_diagsums(int *a, int size)
{
int i, prnc, sec;
prnc = 0;
sec = 0;

for (i = 0; i < size; i++)
{
prnc += a[(size + 1) * i];
sec += a[(size - 1) * (i + 1)];
}
printf("%d, %d\n", prnc, sec);
}
