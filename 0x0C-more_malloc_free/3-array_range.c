# include "holberton.h"

/**
 * *array_range - entry point
 *
 * @min: int argument
 * @max: int argument
 *
 * Description: Creates an array of integers.
 *
 * Return: Pointer to new array.
 */

int *array_range(int min, int max)
{
int *arr;
int c, range;

if (min > max)
{
return (NULL);
}

range = max - min;

arr = malloc(sizeof(int) * (range + 1));

if (arr == NULL)
return (NULL);

for (c = 0; c < range; c++)
arr[c] = c + min;

arr[range] = max;

return (arr);
}
