#include "holberton.h"

/**
 * _isupper - entry point
 *
 * @c: int arguement
 *
 * Description: _isupper Checks if 'c' is uppercase.
 *
 * Return: 1 (if "int c" is uppercase), 0 (If "int c" is not uppercase)
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}

}
