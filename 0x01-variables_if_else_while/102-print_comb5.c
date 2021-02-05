#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int dig1, dig2;
for (dig1 = 0; dig1 <= 98; dig1++)
for (dig2 = dig1 + 1; dig2 <= 99; dig2++)
{
putchar('0' + dig1 / 10);
putchar('0' + dig1 % 10);
putchar(' ');
putchar('0' + dig2 / 10);
putchar('0' + dig2 % 10);
if (dig1 == 98 && dig2 == 99)
{
break;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
