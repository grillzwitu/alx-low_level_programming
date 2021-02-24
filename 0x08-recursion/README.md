## 0x08-recursion
This repository directory contains files that demonstrate the use of __recursion__ in __C__. The files here include;
- __holberton.h__: Header file containing all function prototypes.
- __putchar.c__: The function to print characters to stdout.
- __0-puts_recursion.c__: Prints a string, followed by a new line. __Prototype: void _puts_recursion(char *s);__.
- __1-print_rev_recursion.c__: Prints a string in reverse. __Prototype: void _print_rev_recursion(char *s);__.
- __2-strlen_recursion.c__: Returns the length of a string. __Prototype: int _strlen_recursion(char *s);__.
- __3-factorial.c__: Returns the factorial of a given number. __Prototype: int factorial(int n);__. If __n__ is lower than 0, the function should return -1 to indicate an error. Factorial of __0__ is __1__.
- __4-pow_recursion.c__: Returns the value of x raised to the power of y. __Prototype: int _pow_recursion(int x, int y);__. If __y__ is lower than __0__, the function should return __-1__.
- __5-sqrt_recursion.c__: Returns the natural square root of a number.
__Prototype: int _sqrt_recursion(int n);__. If __n__ does not have a natural square root, the function should return __-1__.
- __6-is_prime_number.c__:  Returns __1__ if the input integer is a prime number, otherwise return __0__. __Prototype: int is_prime_number(int n);__.
- __7-is_palindrome.c__: Returns 1 if a string is a palindrome and 0 if not. __Prototype: int is_palindrome(char *s);__. An empty string is a palindrome.
- __100-wildcmp.c__: Compares two strings and returns 1 if the strings can be considered identical, otherwise return 0. __Prototype: int wildcmp(char *s1, char *s2);__. __s2__ can contain the special character __\*__. The special char __\*__ can replace any string (including an empty string).