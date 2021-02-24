#include "holberton.h"

/**
 * _pow_recursion - entry point
 *
 * @x: int argument
 * @y: int argument
 *
 * Description: Raises x to the power y
 *
 * Return: int
 */

int _pow_recursion(int x, int y)
{

if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else if (y > 0)
{
return (x * _pow_recursion(x, y - 1));
}
else
{
return (1 / _pow_recursion(x, -y));
}

}
