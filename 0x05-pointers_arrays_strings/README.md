## 0x05-pointers_arrays_strings
This repository contains __C__ program files that demosntrate the use of __pointers__ and __arrays__ in __C__. The files include:
- __holberton.h__: Header file that contains all the function prototypes function.
- ___putchar.c__: The declaration and definition of the print function _putchar, used to print characters as required for this exercise.
- __0-reset_to_98.c__: Takes a pointer to an __int__ as parameter and updates the value it points to to __98__. __Prototype__: __void reset_to_98(int *n);__.
- __1-swap.c__: Swaps the values of two integers. __Prototype__: __void swap_int(int *a, int *b);__.
- __2-strlen.c__: Returns the length of a string. __Prototype__: __int _strlen(char *s);__.
- __3-puts.c__: Prints a string, followed by a new line, to stdout. __Prototype__: __void _puts(char *str);__.
- __4-print_rev.c__: Prints a string, in reverse, followed by a new line. __Prototype__: __void print_rev(char *s);__.
- __5-rev_string.c__: Reverses a string. __Prototype__: __void rev_string(char *s);__.
- __6-puts2.c__: Prints every other character of a string, starting with the first character, followed by a new line. __Prototype__: __void puts2(char *str);__.
- __7-puts_half.c__: Prints half of a string, followed by a new line. __Prototype__: __void puts_half(char *str);__. The function prints the second half of the string, if the number of characters is odd, the function should prints the last n characters of the string, where n = (length_of_the_string - 1) / 2.
- __8-print_array.c__: Prints n elements of an array of integers, followed by a new line.
__Prototype__: __void print_array(int *a, int n);__. Where __n__ is the number of elements of the array to be printed, the numbers must be separated by comma, followed by a space, the numbers are displayed in the same order as they are stored in the array, using __printf__.
- __9-strcpy.c__: Copies the string pointed to by __src__, including the terminating __null__ byte (\0), to the buffer pointed to by __dest__. __Prototype__: __char *_strcpy(char *dest, char *src);__. Return value: the pointer to __dest__.
- __100-atoi.c__:  convert a string to an integer. __Prototype__: __int _atoi(char *s);__.
The number in the string can be preceded by an infinite number of characters, taking into account all the - and + signs before the number, If there are no numbers in the string, the function must return 0, without using long, without declaring new variables of “type” array, without hard-coding special values, the code needs to work on both ubuntu 14.04 LTS and 16.04 LTS, the -fsanitize=signed-integer-overflow gcc flag to compile your code. If this flag is not available in you version of gcc, you can install the last version on your VM
We will use GCC version 5 or above to compile.
- __101-keygen.c__: Generates random valid passwords for the program __101-crackme__, using the standard library, the betty-style tests must not be passed (you still need to pass the betty-doc tests), man srand, rand, time can give more information, gdb and objdump can help.