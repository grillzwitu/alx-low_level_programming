#include "holberton.h"

/**
 * swap - entry point
 *
 * @a: int argument
 * @b: int argument
 *
 * Description: swaps the values of
 * its arguments
 *
 * Return: swapped values
 */

void swap(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

/**
 * reverse_array - entry point
 *
 * @a: int argument
 * @n: int argument
 *
 * Description: Reverses contents of an array
 *
 * Return: pointer to reversed array
 */

void reverse_array(int a[], int n)
{
int *ptr1 = a,
*ptr2 = a + n - 1;
while (ptr1 < ptr2)
{
swap(ptr1, ptr2);
ptr1++;
ptr2--;
}

}
