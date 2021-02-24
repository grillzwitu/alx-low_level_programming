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
return (1 + _strlen_recursion(s + 1));
}

}

/**
 * Pal -  entry point
 *
 * @str: string argument
 * @fl: int argument
 * @ll: int argument
 *
 * Description: Checks if a sting is a palindrome
 *
 * Return: 1 (if palindrome) and 0 (If not)
 */

int Pal(char str[], int fl, int ll)
{
if (fl == ll)
{
return (1);
}

if (str[fl] != str[ll])
{
return (0);
}

if (fl < ll + 1)
{
return (Pal(str, fl + 1, ll - 1));
}

return (1);
}

/**
 * is_palindrome - entry point
 *
 * @s: char argument
 *
 * Description: Checks if a string is a palindrome
 *
 * Return: 1 if palindrom and 0 if not.
 */

int is_palindrome(char *s)
{
int l = _strlen_recursion(s);

if (l == 0)
{
return (1);
}

return (Pal(s, 0, l - 1));
}
