#include "holberton.h"

/**
 *
 * _putchar: calls the fuction _putchar.
 * print_alphabet_x10: Prints 10 times the alphabets in lowercase.
 *
 * Return: Void
 */

void print_alphabet_x10(void)
{

int count;
char alphabet;

for (count = 0; count < 10; count++)
{

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');

}

}
