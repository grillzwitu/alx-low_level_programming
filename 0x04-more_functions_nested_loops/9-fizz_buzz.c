#include "holberton.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints numbers 0 to 100,
 * prints Fizz for multiples of 3, prints Buzz
 * for multiples of 5, and FizzBuzz for multiples
 * of both 3 and 5.
 *
 * Return: 0 (Success).
 */

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else
{
printf("%d", i);
}
if (i != 100)
{
putchar(' ');
}
}
printf("\n");
return (0);
}
