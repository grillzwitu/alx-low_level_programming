## 0x06-pointers_arrays_strings
This repository contains __C__ program files that demosntrate the use of __pointers__ and __arrays__ in __C__. The files include:
- __holberton.h__: Header file containing all function prototypes.
- ___putchar.c__: Defines the print function _putchar.
- __0-strcat.c__: Concatenates two strings. __Prototype__: __char *_strcat(char *dest, char *src);__. This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
Returns a pointer to the resulting string dest.
- __1-strncat.c__: Concatenates two strings. __Prototype__: __char *_strncat(char *dest, char *src, int n);__. The ___strncat__ function is similar to the ___strcat__ function, except that
it will use at most __n__ bytes from __src__; and __src__ does not need to be null-terminated if it contains n or more bytes. it returns a pointer to the resulting string dest.
- __2-strncpy.c__: Copies a string. __Prototype__: __char *_strncpy(char *dest, char *src, int n);__. The function should work exactly like __strncpy__.
- __3-strcmp.c__: Compares two strings. __Prototype__: __int _strcmp(char *s1, char *s2);__.
The function should work exactly like __strcmp__.
- __4-rev_array.c__: Reverses the content of an array of integers. __Prototype__: __void reverse_array(int *a, int n);__. Where __n__ is the number of elements of the array.
- __5-string_toupper.c__: Changes all lowercase letters of a string to uppercase. __Prototype__: __char *string_toupper(char *);__.
