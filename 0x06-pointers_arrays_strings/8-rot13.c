#include "holberton.h"

/**
 * *rot13 - entry point
 *
 * @c: char argument
 *
 * Description: Converts string to rot13
 *
 * Return: Converted string
 */

char *rot13(char *c)
{
int i, j;
char rot_13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

for (i = 0; c[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (alphabet[j] == c[i])
{
c[i] = rot_13[j];
break;
}
}
}
return (c);
}
