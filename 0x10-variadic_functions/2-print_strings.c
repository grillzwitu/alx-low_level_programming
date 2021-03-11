# include "variadic_functions.h"
# include <stdio.h>

/**
 * print_strings - entry point
 *
 * @n: int argument
 * @separator: char argument (separates the strings)
 *
 * Description: Prints strings followed by a new line.
 * by a newline.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int a;
va_list str_list;
char *str;

va_start(str_list, n);

for (a = 0; a < n; a++)
{
str = va_arg(str_list, char *);

if (str != NULL)
printf("%s", str);
else
printf("(nil)");

if (separator != NULL && a < (n - 1))
printf("%s", separator);
}

va_end(str_list);
printf("\n");
}
