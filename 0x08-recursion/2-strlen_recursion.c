#include "holberton.h"

/**
 * _strlen_recursion - entry point
 *
 * @s: char argument
 *
 * Description: Counts the lenght of a string
 *
 * Return: Lenght of s.
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return 1 + _strlen_recursion(s + 1);
}

}
