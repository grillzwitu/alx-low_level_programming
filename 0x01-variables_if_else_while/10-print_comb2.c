#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digits;
for (digits = 0; digits < 100; digits++)
{
putchar((digits / 10) + '0');
putchar((digits % 10) + '0');
if (digits < 99)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
