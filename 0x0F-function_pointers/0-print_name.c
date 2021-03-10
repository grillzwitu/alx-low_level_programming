# include "function_pointers.h"

/**
 * print_name - entry point
 *
 * @name: pointer argument for name to be printed
 * @f: pointer function argument
 *
 * Description: Prints name
 */

void print_name(char *name, void (*f)(char *))
{
if (name)
f(name);
}
