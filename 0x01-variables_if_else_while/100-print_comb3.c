#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int dig1, dig2;
for (dig1 = 0; dig1 < 9; dig1++)
for (dig2 = dig1 + 1; dig2 <= 9; dig2++)
{
putchar('0' + dig1);
putchar('0' + dig2);
if (dig1 > 7 && dig2 > 8)
{
break;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
