#include "holberton.h"

/**
 * more_numbers - entry point
 *
 * Description: more_numbers: Prints 10 times the numbers from 0 to 14.
 *
 * Return: Void
 */

void more_numbers(void)
{

int count;
int numbers;

for (count = 0; count < 14; count++)
{

for (numbers = 0; numbers <= 14; numbers++)
{
if (numbers > 9)
{
_putchar('1');
}
_putchar('0' + numbers % 10);
}
_putchar('\n');
}

}
