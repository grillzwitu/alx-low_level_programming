#include "holberton.h"

/**
 * isPrime - entry point
 *
 * @n: int argument
 * @i: int argument
 *
 * Description: Checks if a number is prime
 *
 * Return: 1 if prime or 0 if not prime.
 */

int isPrime(int n, int i)
{
if ((n / i) == 1)
{
return (1);
}
else
if ( n % i == 0 || n < 2)
{
return (0);
}

return (isPrime(n, (i + 1)));
}

/**
 * is_prime_number - entry point
 *
 * @n: int argument
 *
 * Description: Checks if a number is prime
 *
 * Return: 1 if prime or 0 if not prime.
 */

int is_prime_number(int n)
{
return (isPrime(n, 2));
}
