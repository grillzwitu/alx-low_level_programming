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
	size_t a;
	int idxVal;

	if (array != NULL)
	{
		for (a = 0; a < size; a++)
		{
			idxVal = array[a];
			printf("Value checked array[%d] = [%d]\n", a, idxVal);
			if (idxVal == value)
				return (a);
		}
	}
	return (-1);
}
