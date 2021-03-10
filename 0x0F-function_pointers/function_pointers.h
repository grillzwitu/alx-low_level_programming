#ifndef FUNCTION_POINTERS_H_
#define FUNCTION_POINTERS_H_

#include <stdlib.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /*FUNCTION_POINTERS_H_*/
