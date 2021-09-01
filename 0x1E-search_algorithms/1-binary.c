#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @array: array to print
 * @size: size of array
 *
 * return: void
 */

void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array:");
	for (i = 0; i < size; i++)
	{
		printf(" %d", array[i]);
		if (i != size - 1)
			printf(",");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 on failure
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start, mid, end;

	if (array != NULL && size > 0)
	{
		start = 0;
		end = size - 1;
		print_array(array + start, end + 1 - start);
		while (start < end)
		{
			mid = (start + end) / 2;
			if (array[mid] < value)
				start = mid + 1;
			else if (array[mid] > value)
				end = mid;
			else
				return (mid);
			print_array(array + start, end + 1 - start);
		}
	}
	return (-1);
}
