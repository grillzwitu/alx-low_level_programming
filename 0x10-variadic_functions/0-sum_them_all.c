#include "variadic_functions.h"

/**
 * sum_them_all - entry point
 *
 * @n: int argument
 *
 * Description: Sums all its parameters
 *
 * Return: Sum of Parameters
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int a;
int sum = 0;
va_list arg_list;

if (n == 0)
{
return (0);
}

va_start(arg_list, n);

a = 0;
while (a < n)
{
sum += va_arg(arg_list, int);
a++;
}

va_end(arg_list);

return (sum);
}
