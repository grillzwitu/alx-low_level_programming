# include "variadic_functions.h"
# include <stdio.h>

/**
 * print_numbers - entry point
 *
 * @n: int argument
 * @separator: char argument (separates the numbers)
 *
 * Description: Prints numbers followed
 * by a newline.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int a;
va_list num_list;

va_start(num_list, n);
for (a = 0; a < n; a++)
{
printf("%d", va_arg(num_list, int));

if (separator != NULL && a < (n - 1))
{
printf("%s", separator);
}

}

va_end(num_list);
printf("\n");
}
