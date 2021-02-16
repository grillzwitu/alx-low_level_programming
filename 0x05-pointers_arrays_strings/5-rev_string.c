#include "holberton.h"

/**
 * _strlen - entry point
 *
 * @s: char argument
 *
 * Description: Returns lenght of a string
 *
 * Return: Lenght of s
 */

int _strlen(char *s)
{
int len;
len = 0;
while (*s)
{
len += 1;
s++;
}
return (len);
}

/**
 * rev_string - entry point
 *
 * @s: char argument
 *
 * Description: Reverses a string
 *
 */

void rev_string(char *s)
{
int strsize = _strlen(s);
int i;
char syn;
i = 0;
while (i < (strsize / 2))
{
syn = *(s + i);
*(s + i) = *(s + strsize - 1 - i);
*(s + strsize - 1 - i) = syn;
i++;
}

}
