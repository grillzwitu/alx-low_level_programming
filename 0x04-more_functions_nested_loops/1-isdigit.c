#include "holberton.h"

/**
 * _isdigit - entry point
 *
 * @c: int arguement
 *
 * Description: _isdigit Checks if 'c' is a digit.
 *
 * Return: 1 (if "int c" is a digit), 0 (If "int c" is not a digit)
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}

}
