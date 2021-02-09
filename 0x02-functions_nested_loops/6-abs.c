#include "holberton.h"

/**
 * _abs - entry point
 *
 * @num: int argument
 *
 * Description: _abs Prints the absolute value of the argument.
 *
 * Return: 0 (Success).
 */

int _abs(int num)
{
if (num > 0)
{
return (num);
}
else if (num < 0)
{
num = -num;
return (num);
}

return (0);
}
