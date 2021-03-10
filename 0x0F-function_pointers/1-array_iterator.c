# include "function_pointers.h"

/**
 * array_iterator - entry point
 *
 * @array: pointer argument
 * @size: size of the array
 * @action: pointer function
 *
 * Description: Executes action on each element of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int a;

if (array && size && action)
{
for (a = 0; a < size; a++)
{
(*action)(*(array + a));
}
}

}
