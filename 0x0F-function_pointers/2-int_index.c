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
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int a;

if (array && cmp)
{
a = 0;
while (a < size)
{
 a++;
if (cmp(*(array + a)) != 0)
{
return (a);
}
}

}

return (-1);
}
