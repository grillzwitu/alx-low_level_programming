#include "search_algos.h"

/**
 * linear_search - searches for a value in array using the Linear search algo
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 on failure
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
