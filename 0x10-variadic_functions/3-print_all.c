#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - entry point
 *
 * @format: list of types of argument
 *
 * Description: prints all arguments passed
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	char *str;
	int c = 0;

	va_start(arg, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[c] != '\0')
	{
		switch (format[c])
		{
		case 'c':
			printf("%c", (char) va_arg(arg, int));
			break;
		case 'i':
			printf("%d", va_arg(arg, int));
			break;
		case 'f':
			printf("%f", (float) va_arg(arg, double));
			break;
		case 's':
			str = va_arg(arg, char*);
			if (str != NULL)
			{
				printf("%s", str);
				break;
			}
			printf("(nil)");
			break;
		}
		if ((format[c] == 'c' || format[c] == 'i' || format[c] ==
		     'f' || format[c] == 's') && format[(c + 1)] != '\0')
			printf(", ");
		c++;
	}
	printf("\n");
}
