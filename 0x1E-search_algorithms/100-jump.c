#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in an array
 * @array: The size of the array we are looking through
 * @size: The size of the array
 * @value: The value that the function is trying to find.
 * Return: The index of the value or if value is not present in array
 * or if array is NULL, your function must return -1
 */
int jump_search(int *array, size_t size, int value)
{
	int left = 0;
	int size1 = size;
	int right = sqrt(size1);
	int i;

	if (array == NULL)
		return (-1);

	printf("Value checked array[%d] = [%d]\n", left, array[left]);
	while (right < size1 && array[right] <= value)
	{
		if (array[right] >= value)
		{
			break;
		}
		left = right;
		right += sqrt(size1);
		printf("Value checked array[%d] = [%d]\n", left, array[left]);
	}
	printf("Value found between indexes [%d] and [%d]\n", left, right);
	for (i = left; i <= right && i < size1; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
