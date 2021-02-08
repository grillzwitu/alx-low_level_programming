#include "holberton.h"

/**
 * _putchar: calls the fuction _putchar
 * print_alphabet: prints the alphabets in lowercase
 *
 * Return: Void.
 */

void print_alphabet(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}
