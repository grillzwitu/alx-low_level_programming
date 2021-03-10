# include "function_pointers.h"

/**
 * int_index - entry point
 *
 * @array: pointer argument
 * @size: size of the array
 * @cmp: pointer function with int argument
 * to be searched for.
 *
 * Description: Searches for an integer in array
 *
 * Return: index of the first element in array
 * for which the cmp function does not return 0
 * Or If no element matches, or If size <= 0 return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int a;

if (array && size && cmp)
{
a = 0;
while (a < size)
{
if (cmp(*(array + a)) != 0)
{
return (a);
}
a++;
}

}

return (-1);
}
