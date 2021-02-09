#include "holberton.h"

/**
 * _isalpha - entry point
 *
 * @c: int argument
 *
 * Description: _isalpha Checks if "int c" is an alphabet.
 *
 * Return: 1 (if "int c" is an alphabet), 0 (If "int c" is an alphabet).
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}

}
