#include "holberton.h"

/**
 * print_alphabet - entry point
 *
 * Description - prints the alphabets in lowercase
 *
 * Return void
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
