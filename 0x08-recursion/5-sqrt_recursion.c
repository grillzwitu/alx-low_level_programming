#include "holberton.h"

/**
 * find_srt - entry point
 * @n: int argument (the square)
 * @sr: int argument (possible root)
 *
 * Return: root or -1
 */

int find_srt(int n, int sr)
{

if ((sr * sr) > n)
{
return (-1);
}
if (sr * sr == n)
{
return (sr);
}

return (find_srt(n, sr + 1));
}

/**
 * _sqrt_recursion - entry point
 *
 * @n: int argument
 *
 * Description: Returns the sqrt of n
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (find_srt(n, 1));
}
