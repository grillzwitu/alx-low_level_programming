#include "holberton.h"

/**
 *
 * _putchar: calls the fuction _putchar.
 * _islower: Checks if "int c" is lowercase.
 *
 * Return: 1 (if "int c" is lowercase), 0 (If "int c" is not lowercase)
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}

}
