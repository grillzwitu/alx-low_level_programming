#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Description: finds and prints the largest prime factor
 * of n(612852475143)
 *
 * Return: 0
 */

int main(void)
{
long i, max_pf, n;
n = 612852475143;
for (i = 1; i <= sqrt(n); i++)
{
if (n % i == 0)
{
max_pf = n / i;
}
}
printf("%li\n", max_pf);
return (0);
}
