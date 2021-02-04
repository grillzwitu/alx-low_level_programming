#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digits = 48;
for (digits = 48; digits < 58; digits++)
{
putchar(digits);
if (digits < 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
