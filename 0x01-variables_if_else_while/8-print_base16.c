#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch, CH;
for (ch = 48; ch < 58; ch++)
{
putchar(ch);
}
for (CH = 'a'; CH <= 'f'; CH++)
{
putchar(CH);
}
putchar('\n');
return (0);
}
