#include "holberton.h"

/**
 * swap_int - entry point
 *
 * @a: int argument
 * @b: int argument
 *
 * Description: Swaps the values of two integers
 *
 */

void swap_int(int *a, int *b)
{
int swp;
swp = *b;
*b = *a;
*a = swp;
}
